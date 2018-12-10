#include<iostream>
#include<queue>
#include<vector>
#include<functional>
#include<cstring>
#define ll long long
#define MAX 0x7fffffff
using namespace std;


priority_queue<pair<ll, ll>, vector<pair<ll, ll>>> pq;
vector<ll> dis(1005, MAX);
vector<ll> dis2(1005, MAX);
vector<vector<pair<ll, ll>>> v(10000);
vector<vector<pair<ll, ll>>> v2(10000);
int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, x;
	cin >> n >> m >> x;

	for (int i = 0; i < m; i++) {

		int s, e, t;
		cin >> s >> e >> t;
		v[s].push_back(make_pair(e,t));
		v2[e].push_back(make_pair(s, t));
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
				pq.push(make_pair(dis[iter.first], iter.first));
			}
		}
	}

	dis2[x] = 0;
	pq.push(make_pair(0, x));
	while (!pq.empty()) {
		pair<ll, ll> now = pq.top();
		pq.pop();
		ll d = now.first;
		ll u = now.second;

		if (d > dis2[u]) {
			continue;
		}
		for (pair<ll, ll> iter : v2[u]) {
			if (dis2[u] + iter.second < dis2[iter.first]) {
				dis2[iter.first] = dis2[u] + iter.second;
				pq.push(make_pair(dis2[iter.first], iter.first));
			}
		}
	}
	ll max = -1;
	for (int i = 0; i <= n; i++) {
		if (dis[i] != MAX && dis2[i] != MAX) {
			if (max < dis[i] + dis2[i]) {
				max = dis[i] + dis2[i];
			}
		}
	}
	cout << max;
	return 0;
}