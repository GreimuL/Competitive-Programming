#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

char a[1005];
char b[1005];

int ab[1005][1005];

int main() {
	cin >> a+1 >> b+1;

	int lena = strlen(a+1);
	int lenb = strlen(b+1);

	for (int i = 1; i <= lena; i++) {
		for (int j = 1; j <=lenb; j++) {
			if (a[i] == b[j]) {
				ab[i][j] = ab[i-1][j-1] + 1;
			}
			else {
				ab[i][j] = max(ab[i - 1][j], ab[i][j - 1]);
			}
		}
	}
	
	cout << ab[lena][lenb];

	return 0;
}