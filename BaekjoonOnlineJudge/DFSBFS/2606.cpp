#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n, m, a, b;
int cnt;

queue<int> q;
vector<int> v[105];
int vis[105];
void bfs(int x) {
	q.push(x);
	vis[x] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();

		for (auto i:v[now]) {
			if (vis[i] == 0) {
				q.push(i);
				vis[i] = 1;
				cnt++;
			}
		}
	}

}

int main() {

	int n,m,a,b;


	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(1);

	cout << cnt;


	return 0;
}