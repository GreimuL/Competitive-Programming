#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

char a[105];
char b[105];
char c[105];

int ab[105][105][105];

int main() {
	cin >> a + 1 >> b + 1>>c+1;

	int lena = strlen(a + 1);
	int lenb = strlen(b + 1);
	int lenc = strlen(c + 1);

	for (int i = 1; i <= lena; i++) {
		for (int j = 1; j <= lenb; j++) {
			for (int k = 1; k <= lenc; k++) {
				if (a[i] == b[j]&&b[j] == c[k]) {
					ab[i][j][k] = ab[i - 1][j - 1][k-1] + 1;
				}
				else {
					ab[i][j][k] = max(ab[i - 1][j][k],max( ab[i][j - 1][k],ab[i][j][k-1]));
				}
			}
		}
	}

	cout << ab[lena][lenb][lenc];

	return 0;
}