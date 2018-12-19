#include<iostream>
#include<vector>
#include<queue>
#define MAX 0x7fffffff
using namespace std;

vector<pair<int,int>> vc[20005];
int dis[20005];
int inq[20005];
int cycle[20005];
int main() {

	for (int i = 0; i < 20005; i++) {
		dis[i] = MAX;
	}

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int V, E, K;
	cin >> V >> E;

	int U, TV, W;
	for (int i = 0; i < E; i++) {
		cin >> U >> TV >> W;
		vc[U].push_back(make_pair(TV, W));
	}
	K = 1;
	dis[K] = 0;
	queue<int> q;
	q.push(K);
	inq[K] = 1;
	cycle[K]= 1;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		inq[u] = 0;
		for (auto iter : vc[u]) {
			int v = iter.first;
			int w = iter.second;
			if (dis[v] > dis[u] + w) {
				dis[v] = dis[u] + w;
				if (cycle[v] == V) {
					cout << "-1";
					return 0;
				}
				if (!inq[v]) {
					cycle[v]++;
					q.push(v);
					inq[v] = 1;
				}
			}
		}
	}
	for (int i = 2; i <= V; i++) {
		if (dis[i] == MAX) {
			cout << "-1\n";
		}
		else {
			cout << dis[i] << "\n";
		}
	}

	return 0;
}