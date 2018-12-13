#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> v[105];
queue<int> q;
int ck[105];
int fa, fb;
int cnt = 0;
int ct[105];
bool ans = true;
void bfs(int a) {
	q.push(a);
	ck[a] = 1;

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < v[now].size(); i++) {
			
			if (ck[v[now][i]] == 0) {
				
				ct[v[now][i]] = ct[now] + 1;
				ck[v[now][i]] = 1;
				q.push(v[now][i]);
				if (v[now][i] == fb) {
					cout << ct[v[now][i]];
					ans = false;
					return;
				}
			}
		}
	}
}

int main() {

	int n;
	cin >> n;

	cin >> fa >> fb;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int ta, tb;
		cin >> ta >> tb;
		v[ta].push_back(tb);
		v[tb].push_back(ta);
	}
	bfs(fa);
	if (fa == fb&&ans == false) {
		cout << 0;
		ans = false;
	}
	if (ans == true) {
		cout << -1;
	}
	return 0;
}