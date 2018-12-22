#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

int vis[1005];

queue<int> q;

bool binaryconfirm(int ii,vector<vector<int>> v) {

	q.push(ii);
	vis[ii] = 1;
	while (!q.empty()) {
		int now = q.front();
		int mycol = vis[now];
		q.pop();

		for (auto i : v[now]) {

			if (vis[i] == 0) {
				if (mycol == 1) {
					vis[i] = 2;
					q.push(i);
				}
				else if (mycol == 2) {
					vis[i] = 1;
					q.push(i);
				}
			}
			else if (vis[i] == 1) {
				if (mycol == 1) {
					return false;
				}
			}
			else if (vis[i] == 2) {
				if (mycol == 2) {
					return false;
				}
			}

		}
	}
	return true;
	

}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int test = 0; test < T; test++) {
		vector<vector<int>> v(1005);
		memset(vis, 0, sizeof(vis));
		int n, m;
		cin >> n >> m;

		for (int info = 0; info < m; info++) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		bool ck=true;

		for (int iii = 1; iii <= n; iii++) {
			if (vis[iii] == 0) {
				if (!binaryconfirm(iii, v)) {
					ck = false;
				}
			}
		}

		if (ck) {
			cout << "possible\n";
		}
		else {
			cout << "impossible\n";
		}


	}

	return 0;
}