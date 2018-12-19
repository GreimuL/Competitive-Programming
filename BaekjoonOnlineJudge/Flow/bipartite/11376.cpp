#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

vector<int> per[2005];
vector<int> work(2005);
int vis[2005];
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
		int tt = i * 2;
		for (int j = 0; j<num; j++) {
			int tp;
			cin >> tp;
			per[tt - 1].push_back(tp);
			per[tt].push_back(tp);
		}
	}

	int cnt = 0;
	for (int i = 1; i <= 2*n; i++) {
		memset(vis, 0, sizeof(vis));
		if (binarymatch(i)) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}