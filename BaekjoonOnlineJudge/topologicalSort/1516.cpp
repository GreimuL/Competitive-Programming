#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;

queue<int> q;
vector<vector<int>> v(505);

int bt[505];
int ab[505];
int in[505];

void topobfs2(int fir) {
	q.push(fir);
	in[fir]--;
	while (!q.empty()) {

		int now = q.front();
		q.pop();

		for (int i = 0; i < v[now].size(); i++) {
			in[v[now][i]]--;
			ab[v[now][i]] = max(ab[v[now][i]], ab[now] + bt[v[now][i]]);
			if (in[v[now][i]] == 0) {
				topobfs2(v[now][i]);
			}
		}

	}
}

int main() {

	int n, d, x;
	
	cin >> n;
	for (int bb = 1; bb <= n; bb++) {
		cin >> d;
		bt[bb] = d;

		while (1) {
			cin >> x;
			if (x == -1) {
				break;
			}
			v[x].push_back(bb);
			in[bb]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (in[i] == 0) {
			ab[i] = bt[i];
			topobfs2(i);
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << ab[i] << "\n";
	}
	

	return 0;
}