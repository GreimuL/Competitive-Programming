#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int graph[1005][1005];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int vis[1005][1005];

int H, W, N;
int cnt;
void bfs(int stx,int sty, int fi) {
	queue<pair<pair<int, int>, int>> q;
	int anx;
	int any;
	bool isfind = false;
	q.push(make_pair(make_pair(stx,sty),0));

	while (!q.empty()) {
		int nowx = q.front().first.first;
		int nowy = q.front().first.second;
		int curdis = q.front().second;
		q.pop();
		
		for (int i = 0; i < 4; i++) {
			int nex = nowx + dx[i];
			int ney = nowy + dy[i];

			if (nex >= 0 && nex < H&&ney >= 0 && ney < W) {
				if (graph[nex][ney] == fi) {
					cnt += curdis+1;
					anx = nex;
					any = ney;
					isfind = 1;
					break;
				}
				if (graph[nex][ney] != -1&&vis[nex][ney] !=1) {
		            vis[nex][ney] = 1;
					q.push(make_pair(make_pair(nex, ney),curdis+1));
				}
			}
		}
		if (isfind) {
			break;
		}

	}

	memset(vis, 0, sizeof(vis));
	if (fi < N) {
		bfs(anx, any, fi + 1);
	}
}
int main() {
	int stx,sty;
	cin >> H >> W >> N;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			char ord;
			cin >> ord;
			if (ord == 'S') {
				stx = i;
				sty = j;
			}
			else if (ord == 'X') {
				graph[i][j] = -1;
			}
			else if (isdigit(ord)) {
				graph[i][j] = ord - '0';
			}
		}
	}
	bfs(stx, sty, 1);
	cout << cnt;
}