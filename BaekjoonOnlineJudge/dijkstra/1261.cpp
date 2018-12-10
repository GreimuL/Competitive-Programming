#include<cstdio>
#include<vector>
#include<queue>

#define MAX 0x7fffffff

using namespace std;

int graph[105][105];
int dis[105][105];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < 105; i++) {
		for (int j = 0; j < 105; j++) {
			dis[i][j] = MAX;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &graph[i][j]);
		}
	}
	
	dis[0][0] = 0;
	priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
	pq.push(make_pair(0, make_pair(0, 0)));

	while (!pq.empty()) {
		pair<int, int> now = pq.top().second;
		int d = pq.top().first;
		pq.pop();
		if (d > dis[now.first][now.second]) {
			continue;
		}
		for (int dxy = 0; dxy < 4; dxy++) {
			int nex = now.first + dx[dxy];
			int ney = now.second + dy[dxy];
			if (nex<0 || ney<0 || nex>=m || ney>=n) {
				continue;
			}
			if (dis[now.first][now.second] + graph[nex][ney] < dis[nex][ney]) {
				dis[nex][ney] = dis[now.first][now.second] + graph[nex][ney];
				pq.push(make_pair(dis[nex][ney], make_pair(nex, ney)));
			}
		}
	}
	printf("%d", dis[m - 1][n - 1]);
	return 0;
}