#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int prob[105][105];

bool cmp(const pair<pair<int, int>, pair<int, int>>& v1,const pair<pair<int, int>, pair<int, int>>& v2) {
	if (v1.first.second > v2.first.second) {
		return true;
	}
	else if(v1.first.second<v2.first.second) {
		return false;
	}
	else {
		if (v1.second.second < v2.second.second) {
			return true;
		}
		else if (v1.second.second > v2.second.second) {
			return false;
		}
		else {
			return v1.second.first < v2.second.first;
		}
	}
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		memset(prob, 0, sizeof(prob));
		vector<pair<pair<int, int>, pair<int, int>>> v(105);

		int n, k, t, m;
		cin >> n >> k >> t >> m;

		for (int j = 0; j < m; j++) {
			int ii, jj, ss;
			cin >> ii >> jj >> ss;
			if (prob[ii][jj] < ss) {
				prob[ii][jj] = ss;
			}
			v[ii].second.first = j;
			v[ii].second.second++;

		}

		for (int asdf = 0; asdf <= n; asdf++) {
			v[asdf].first.first = asdf;
			for (int aaaa = 0; aaaa <= k; aaaa++) {
				v[asdf].first.second += prob[asdf][aaaa];
			}
		}

		sort(v.begin(), v.end(), cmp);

		for (int qwer = 0; qwer <= n; qwer++) {
			if (v[qwer].first.first == t) {
				cout << qwer + 1<<"\n";
				break;
			}
		}
	}

	return 0;
}