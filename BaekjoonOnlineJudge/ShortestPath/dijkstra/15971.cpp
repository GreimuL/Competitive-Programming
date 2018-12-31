#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
#include<cmath>
#define MAX 0x7fffffff

using namespace std;

priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<pair<int,int>> v[100005];
vector<int> minv;
int dis[100005];
int found[100005];
int via[100005];
int maxv[100005];

int main() {

	for (int i = 0; i < 100005; i++) {
		dis[i] = MAX;
	}


	int n, fa, fb;
	cin >> n >> fa >> fb;
	int a, b, c;
	for (int i = 0; i < n-1; i++) {
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	dis[fa] = 0;
	pq.push(make_pair(0, fa));
	for (int i = 0; i < n; i++) {
		int x = -1;
		while (!pq.empty()) {
			x = pq.top().second;
			if (found[x] == 0) {
				break;
			}
			pq.pop();
		}
		if(!pq.empty()){
			pq.pop();
		}
		found[x] = 1;
		for (int j = 0; j < v[x].size(); j++) {
			if (found[v[x][j].first] == 0 && dis[v[x][j].first] > dis[x] + v[x][j].second) {
				dis[v[x][j].first] = dis[x] + v[x][j].second;
				via[v[x][j].first] = x;
				maxv[v[x][j].first] = max(v[x][j].second, maxv[x]);
				pq.push(make_pair(dis[v[x][j].first], v[x][j].first));
			}
		}
	}
	/*int x = fb;
	while (via[x] != fa) {
		for (auto i : v[x]) {
			if (i.first == via[x]) {
				minv.push_back(i.second);
				break;
			}
		}
		x = via[x];
	}
	for (auto i : v[x]) {
		if (i.first == via[x]) {
			minv.push_back(i.second);
			break;
		}
	}
	sort(minv.begin(), minv.end());
	int result = 0;
	for (int i = 0; i<minv.size() - 1; i++) {
		result += minv[i];
	}
	cout << result;
	*/

	cout << dis[fb] - maxv[fb];
	return 0;
}