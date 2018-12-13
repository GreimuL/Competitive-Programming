#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int cnt;
int ind[1005];
vector<int> ord;
queue<int> q;
vector<vector<int>> v(1005);

void topobfs(int fir) {
	q.push(fir);
	ind[fir]--;
	while (!q.empty()) {

		int now = q.front();
		ord.push_back(now);
		q.pop();
		cnt++;
		for (int i = 0; i < v[now].size(); i++) {
			ind[v[now][i]]--;
			if (ind[v[now][i]] == 0) {
				topobfs(v[now][i]);
			}
		}

	}
}

int main() {

	int n, m,s,po,no;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> s;
		for (int j = 0; j < s; j++) {

			if (j != 0) {
				cin >> no;
				v[po].push_back(no);
				ind[no]++;
				po = no;
			}
			else {
				cin >> po;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (ind[i] == 0) {
			topobfs(i);
		}
	}

	if (cnt == n) {
		for (auto i : ord) {
			cout << i << "\n";
		}
	}
	else {
		cout << 0;
	}

	return 0;
}