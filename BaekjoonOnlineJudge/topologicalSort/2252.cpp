#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int ind[32005];
int n;
vector<vector<int>> v(32005);
queue<int> q;
void topobfs() {
    for (int i = 1; i <= n; i++) {
		if (ind[i] == 0) {
			q.push(i);
        }
    }

	while (!q.empty()) {

		int now = q.front();
		cout << now << " ";
        ind[now]--;
		q.pop();
		
		for (int i = 0; i < v[now].size(); i++) {
			ind[v[now][i]]--;
			if (ind[v[now][i]] == 0) {
				q.push(v[now][i]);
			}
		}

	}
}

int main() {

	int  m,a,b;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		ind[b]++;
	}
	topobfs();

	return 0;
}