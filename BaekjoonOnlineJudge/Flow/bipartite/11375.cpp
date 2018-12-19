#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

vector<int> per[1005];
vector<int> work(1005);
int vis[1005];
int n, m;
bool binarymatch(int i) {
	if (vis[i] == 1) {
		return false;
	}
	vis[i] = 1;
	for (auto iter : per[i]) {
		if (work[iter] == 0) {
			work[iter] = i;
			return true;
		}
		else {
			if (binarymatch(work[iter])) {
				work[iter] = i;
				return true;
			}
		}
	}
	return false;
}
int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		for (int j = 0; j<num; j++) {
			int tp;
			cin >> tp;
			per[i].push_back(tp);
		}
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		if (binarymatch(i)) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}