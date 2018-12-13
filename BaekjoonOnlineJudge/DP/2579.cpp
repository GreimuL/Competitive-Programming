#include<iostream>
#include<algorithm>
using namespace std;

int dp[305][3];
int st[305];

int main() {

	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> st[i];
	}

	dp[0][1] = 0;
	dp[0][0] = st[0];
	dp[1][0] = st[1];
	dp[1][1] = st[0] + st[1];

	for (int i = 0; i < n; i++) {
		dp[i][0] = st[i] + max(dp[i - 1][1], max(dp[i - 2][0], dp[i - 2][1]));
		dp[i][1] = st[i] + max(dp[i - 2][0], dp[i - 2][1]);
	}

	cout << max(dp[n - 1][0], dp[n - 1][1]);
	return 0;
}