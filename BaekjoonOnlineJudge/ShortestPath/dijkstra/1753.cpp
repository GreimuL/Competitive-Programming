#include<iostream>
#include<queue>
#include<vector>
#include<functional>
#define N 20005
#define MAX 0x7fffffff
#define ll long long
using namespace std;

int dis[N];
int via[N];
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<int, int>>> pq;
vector<vector<pair<ll, ll>>> v(N);
int main() {

	for (int i = 0; i < N; i++) {
		dis[i] = MAX;
	}
	int n, m, x;
	cin >> n >> m >> x;
	for (int i = 0; i < m; i++) {
		int s, e, t;
		cin >> s >> e >> t;
		v[s].push_back(make_pair(e, t));
	}
	dis[x] = 0;
	pq.push(make_pair(0, x));
	while (!pq.empty()) {
		pair<ll, ll> now = pq.top();
		pq.pop();
		ll d = now.first;
		ll u = now.second;
		if (d > dis[u]) {
			continue;
		}
		for (pair<ll, ll> iter : v[u]) {
			if (dis[u] + iter.second < dis[iter.first]) {
				dis[iter.first] = dis[u] + iter.second;
				via[iter.first] = u;
				pq.push(make_pair(dis[iter.first], iter.first));
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (dis[i] == MAX) {
			cout << "INF\n";
		}
		else {
			cout << dis[i] << "\n";
		}
	}
}
