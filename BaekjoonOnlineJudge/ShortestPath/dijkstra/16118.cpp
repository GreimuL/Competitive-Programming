#include <iostream>
#include<vector>
#include<queue>
#define MAX 0x7fffffff
using namespace std;

vector<vector<pair<int, int> > > v(4005);
vector<vector<pair<pair<int, int>, int> > > v2(4005);
vector<int> dis(100005, MAX);
int dis2[100005][2];
int main()
{
	for (int i = 0; i < 100005; i++) {
		for (int j = 0; j < 2; j++) {
			dis2[i][j] = MAX;
		}
	}
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b, d;
		cin >> a >> b >> d;
		d *= 2;
		v[a].push_back(make_pair(b, d));
		v[b].push_back(make_pair(a, d));
		v2[a].push_back(make_pair(make_pair(b, d), 0));
		v2[b].push_back(make_pair(make_pair(a, d), 0));
	}

	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>>> pq;

	dis[1] = 0;
	pq.push(make_pair(0, 1));

	while (!pq.empty()) {
		pair<int, int> now = pq.top();

		pq.pop();

		int d = now.first;
		int u = now.second;
		if (d > dis[u]) {
			continue;
		}

		for (pair<int, int> iter : v[u]) {
			if (dis[u] + iter.second < dis[iter.first]) {
				dis[iter.first] = dis[u] + iter.second;
				pq.push(make_pair(dis[iter.first], iter.first));
			}
		}
	}
	priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int > >,greater<pair<pair<int,int>,int> > > pq2;
	pq2.push(make_pair(make_pair(0, 1), 1));
	dis2[1][0] = 0;
	while (!pq2.empty()) {
		pair<int, int> now = pq2.top().first;
		int nt = pq2.top().second;
		pq2.pop();
		int d=now.first;

		int u = now.second;
		/*if (d > dis2[u][nt]) {
			continue;
		}*/
		if (nt == 1) {
			for (pair<int, int> iter : v[u]) {
				if (dis2[u][0] + iter.second / 2 < dis2[iter.first][1]) {
					dis2[iter.first][1] = dis2[u][0] + iter.second / 2;
					pq2.push(make_pair(make_pair(dis2[iter.first][1], iter.first), 0));
				}
			}
		}
		else {
			for (pair<int, int> iter : v[u]) {
				if (dis2[u][1] + iter.second * 2 < dis2[iter.first][0]) {
					dis2[iter.first][0] = dis2[u][1] + iter.second * 2;
					pq2.push(make_pair(make_pair(dis2[iter.first][0], iter.first), 1));
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n + 1; i++) {
		if ((dis2[i][0] == MAX && dis2[i][1] == MAX) || dis[i] == MAX) {
			continue;
		}
		if (dis2[i][0] < dis2[i][1]) {
			if (dis2[i][0] > dis[i]) {
				ans++;
			}
		}
		else {
			if (dis2[i][1] > dis[i]) {
				ans++;
			}
		}
	}
	cout << ans;
}
