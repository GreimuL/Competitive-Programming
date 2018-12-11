#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	int n,a,b;
	int cnt = 0;
	pair<int, int> pre;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(make_pair(b, a));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		if (i != 0) {
			if (v[i].second >= pre.first) {
				cnt++;
				pre = v[i];
			}
		}
		else {
			cnt++;
			pre = v[i];
		}
	}
	cout << cnt;
	return 0;
}