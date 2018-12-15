#include<iostream>
#include<vector>
#include<queue>


using namespace std;
int n, m, a, b;
vector<int> v[505];
queue<int> q;
int vis[505];
int cnt;
int dt[505];
void bfs(int x) {
	q.push(x);
	vis[x] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
	
		for (auto i : v[now]) {
			
			if (vis[i] == 0&&dt[i]<=3) {
				dt[i] += dt[now];
				q.push(i);
				vis[i] = 1;
				cnt++;
			}
		}
		
	}

}

int main() {

	for (int i = 0; i < 505; i++) {
		dt[i] = 1;
	}
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);

	}
	bfs(1);
	cnt = 0;
	for (int i = 2; i <= 500; i++) {
		if (vis[i] == 1 && dt[i] <= 3) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}