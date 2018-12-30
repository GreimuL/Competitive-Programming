#include<iostream>
#include<algorithm>
#include<cstring>
#define MAX 0x7fffffff
using namespace std;

int len[100];
int dp[100];
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> len[i];
	}
	int mlen = 0;
	int minans = MAX;
	for (int i = 0; i < n; i++) {
		
		for (int j = 1; j <= n;j++){
			if (i + j <= n) {
				mlen = 0;
				for (int k = i; k < i + j; k++) {
					mlen += len[k];
				}

				for (int cle = 0; cle < 100; cle++) {
					dp[cle] = MAX;
				}

				dp[0] = mlen;
				int tplen = 0;
				for (int m = 0; m < n; m++) {
					tplen = 0;
					for (int mn = m; mn >= 0; mn--) {
						tplen += len[mn];
						if (m == n - 1 && mn == 0) {
							break;
						}
						if (tplen >= mlen) {
							dp[m + 1] = min(dp[m + 1], max(tplen, dp[mn]));
						}
					}
				}
				minans = min(dp[n] - mlen, minans);
			}
		}
	}
	cout << minans;
	return 0;
}