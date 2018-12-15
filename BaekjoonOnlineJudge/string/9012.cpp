#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<char> st;
	string s;
	int n;
	int error = 0;
	cin >> n;
	for (int j = 0; j < n; j++) {
		st.clear();
		error = 0;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') {
				st.push_back(s[i]);
			}
			else {
				if (!st.empty()) {
					string pointer(1, st.back());
					while (pointer != "(") {
						st.pop_back();
						if (st.empty()) {
							cout << "NO\n";
							error = 1;
							break;
						}
						pointer = st.back();
					}
					if (pointer == "("&&error==0) {
						st.pop_back();
					}
				}
				else { 
					cout << "NO\n";
					error = 1;
					break;
				}
			}
		}
		if (error == 0&&st.empty()) {
			cout << "YES\n";
		}
		if (error == 0 && !st.empty()) {
			cout << "NO\n";
		}
	}
	
	return 0;
}