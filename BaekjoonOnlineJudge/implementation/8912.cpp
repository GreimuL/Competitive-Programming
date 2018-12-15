#include<iostream>
#include<cstring>
using namespace std;

int anum[1005];
int bnum[1005];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		memset(bnum, 0, sizeof(bnum));
		int n;
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> anum[j];
		}

		for (int j = 1; j < n; j++) {
			if (j == 1) {
				if (anum[j] >= anum[j - 1]) {
					bnum[j]++;
				}
			}
			else {
				
				for (int k = j - 1; k >= 0; k--) {
					if (anum[j] >= anum[k]) {
						bnum[j]++;
					}
				}
				
			}
		}
		int result = 0;
		for (int j = 1; j < n; j++) {
			result += bnum[j];
		}
		cout << result << "\n";

	}

	return 0;
}