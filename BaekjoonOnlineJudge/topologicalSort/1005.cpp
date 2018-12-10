#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;

queue<int> q;
vector<vector<int>> v(1005);

int bt[1005];
int ab[1005];
int in[1005];

void topobfs2(int fir) {
	q.push(fir);
	in[fir]--;
	while (!q.empty()) {

		int now = q.front();
		q.pop();

		for (int i = 0; i < v[now].size(); i++) {
			in[v[now][i]]--;
			ab[v[now][i]] = max(ab[v[now][i]], ab[now] + bt[v[now][i]]);
			if (in[v[now][i]] == 0) {
				topobfs2(v[now][i]);
			}
		}

	}
}

int main() {

	int t, n, k, d, x, y, w;
	cin >> t;
	for (int test = 0; test < t; test++) {
		memset(ab, 0, sizeof(ab));
		memset(in, 0, sizeof(in));
		for (auto &i : v) {
			i.clear();
		}
		cin >> n >> k;
		for (int time = 1; time <= n; time++) {
			cin >> d;
			bt[time] = d;
		}
		for (int ord = 0; ord < k; ord++) {
			cin >> x >> y;
			v[x].push_back(y);
			in[y]++;
		}
		for (int i = 1; i <= n; i++) {
			if (in[i] == 0) {
				ab[i] = bt[i];
				topobfs2(i);
			}
		}

		cin >> w;

		cout << ab[w]<<"\n";
	}

	return 0;
}