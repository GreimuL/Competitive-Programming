#include<cstdio>
#include<cstring>
using namespace std;

int squ[40][40];
int ck[40];
int main() {
	char a[2];
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1s", &a);
			if (a[0]>=48 && a[0]<=57) {
				squ[i][j] = a[0] - '0';
			}
			else {
				squ[i][j] = a[0] - 'A'+10;
			}
		}
	}
	bool reck1 = true;
	bool reck2 = true;
	for (int i = 1; i < n; i++) {
		if (squ[0][i] < squ[0][i - 1]) {
			reck1 = false;
		}
	}
	for (int i = 1; i < n; i++) {
		if (squ[i][0] < squ[0][i - 1]) {
			reck2 = false;
		}
	}
	for (int i = 0; i < n; i++) {
		memset(ck, 0, sizeof(ck));
		for (int j = 0; j < n; j++) {
			ck[squ[i][j]]++;
			if (ck[squ[i][j]] > 1) {
				printf("No");
				return 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		memset(ck, 0, sizeof(ck));
		for (int j = 0; j < n; j++) {
			ck[squ[j][i]]++;
			if (ck[squ[j][i]] > 1) {
				printf("No");
				return 0;
			}
		}
	}
	if (reck1 == true && reck2 == true) {
		printf("Reduced");
	}
	else {
		printf("Not Reduced");
	}
	return 0;
}