#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	vector<pair<int, int>> v;
	int t, n, a, b, tp;
	int cnt = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cnt = 0;
		v.clear();
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end());
		for (auto j : v) {
			if (j.first == 1) {
				tp = j.second;
				cnt++;
			}
			else {
				if (j.second < tp) {
					cnt++;
					tp = j.second;
				}
				
			}
		}
		cout << cnt<<"\n";
	}

	return 0;
}