#include<iostream>
#include<queue>
#include<vector>
#define MAX 0x7fffffff;
using namespace std;


int v[135][135];
int dis[135][135];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	
	int n;
	int cnt = 0;
	while (1) {
		cnt++;
		for (int i = 0; i < 135; i++) {
			for (int j = 0; j < 135; j++) {
				dis[i][j] = MAX;
			}
		}
		cin >> n;
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> v[i][j];
			}
		}

		dis[0][0] = v[0][0];
		priority_queue < pair<int, pair<int, int>>,vector<pair<int,pair<int,int>>>, greater<pair<int, pair<int, int>>>> pq;
		pq.push(make_pair(v[0][0], make_pair(0, 0)));
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
				if (nex < 0 || ney < 0 || nex >= n || ney >= n) {
					continue;
				}
				if (dis[now.first][now.second] + v[nex][ney] < dis[nex][ney]) {
					dis[nex][ney] = dis[now.first][now.second] + v[nex][ney];
					pq.push(make_pair(dis[nex][ney], make_pair(nex, ney)));
				}
				
			}
		}
		cout <<"Problem " <<cnt<<": "<<dis[n - 1][n - 1] << "\n";
	}

}