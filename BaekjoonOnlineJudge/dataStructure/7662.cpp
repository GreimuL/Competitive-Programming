#include<iostream>
#include<set>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int test;
	cin >> test;
	for (int test2 = 0; test2 < test; test2++) {

		multiset<int> ms;
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			char ord;
			cin >> ord;
			if (ord == 'I') {
				int n;
				cin >> n;
				ms.insert(n);
			}
			else {
				int n;
				cin >> n;
				if (ms.size() != 0) {
					if (n == 1) {
						ms.erase(--ms.end());
					}
					else {
						ms.erase(ms.begin());
					}
				}
			}
		}
		if (ms.size() == 0) {
			cout << "EMPTY\n";
		}
		else {
			cout << *--ms.end() << " " << *ms.begin() << "\n";
		}
	}

	return 0;
}