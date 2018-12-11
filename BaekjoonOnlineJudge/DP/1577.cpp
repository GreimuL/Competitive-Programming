#include<iostream>
#include<vector>
#define ll long long
using namespace std;

ll graph[105][105];
ll road[105][105];

vector<pair<int, int>> v[105][105];

int main() {

	ll n, m;
	cin >> n >> m;

	ll k;
	cin >> k;

	for (ll i = 0; i < k; i++) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		
		v[a][b].push_back(make_pair(c,d));
		v[c][d].push_back(make_pair(a, b));
	}

	graph[0][0] = 1;

	for (ll i = 0; i < n+1; i++) {
		for (ll j = 0; j < m+1; j++) {
			bool ac = true;
			bool bc = true;
			pair<int, int> a = { i - 1,j };
			pair<int, int> b = { i,j - 1 };

			for (auto k : v[i][j]) {
				if (k == a) {
					ac = false;
				}
				if (k == b) {
					bc = false;
				}
			}
			
			if ((i - 1 >= 0)&&(ac==true)) {
				graph[i][j] += graph[i - 1][j];
			}
			if ((j-1>=0)&&(bc==true)) {
				graph[i][j] += graph[i][j - 1];
			}
		}
	}

	cout << graph[n][m];

	return 0;
}