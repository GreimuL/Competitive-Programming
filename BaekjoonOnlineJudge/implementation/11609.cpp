#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<string, string>> v;
int main() {

	int n;
	cin >> n;
	string s;
	string t;
	for (int i = 0; i < n; i++) {
		cin >> s;
		cin >> t;
		v.push_back(make_pair(t,s));
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i].second<<" "<<v[i].first << "\n";
	}

	return 0;
}