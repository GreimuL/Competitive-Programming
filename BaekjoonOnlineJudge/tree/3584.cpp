#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {

		vector<int> v(10005);
		vector<int> v2;
		vector<int> v3;

		for (auto &k : v) {
			k = 0;
		}

		int n;

		cin >> n;
		int a, b;
		for (int j = 0; j < n - 1; j++) {
			
			cin >> a >> b;
			v[b] = a;
		}
		cin >> a >> b;
		int tmpa;
		int tmpb;
		v2.push_back(a);
		v3.push_back(b);
		tmpa = v[a];
		tmpb = v[b];
		while (1) {
			if (tmpa == 0) {
				break;
			}
			else {
				v2.push_back(tmpa);
				tmpa = v[tmpa];
			}
		}
		while (1) {
			if (tmpb == 0) {
				break;
			}
			else {
				v3.push_back(tmpb);
				tmpb = v[tmpb];
			}
		}

		int len = min(v2.size(), v3.size());

		int al = v2.size();
		int bl = v3.size();
		int sv;
		for (int i = 1; i <= len; i++) {
			if (v2[al - i] == v3[bl - i]) {
				sv = v2[al - i];
			}
			else {
				break;
			}
		}
		cout << sv << "\n";
	}

	return 0;
}