#include<iostream>
#define MOD 9901
using namespace std;

int dp[100005][3];

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < 3; i++) {
		dp[0][i] = 1;
	}

	for (int i = 1; i < n; i++) {
		dp[i][0] = ((dp[i - 1][0]%MOD) + (dp[i - 1][1]%MOD) + (dp[i - 1][2]%MOD))%MOD;
		dp[i][1] = ((dp[i - 1][0]%MOD) + (dp[i - 1][2]%MOD))%MOD;
		dp[i][2] = ((dp[i - 1][0]%MOD) + (dp[i - 1][1]%MOD))%MOD;
	}
	cout << (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]) % MOD;



	return 0;
}