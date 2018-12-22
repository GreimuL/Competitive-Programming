#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int num[55];
int dp[55];
int main() {

	char st[55];
	cin >> st;
	
	int len = strlen(st);

	for (int i = 0; i < len; i++) {
		num[i] = st[i] - 'a';
	}
	
	for (int i = 0; i < len; i++) {
		if (dp[i] == 0) {
			dp[i] = 1;
		}
		for (int j = 0; j < i; j++) {
			if (num[i] > num[j]) {
				if (dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
				}
			}
		}
	}
	sort(dp, dp + len);

	cout << 26 - dp[len - 1];

	return 0;
}