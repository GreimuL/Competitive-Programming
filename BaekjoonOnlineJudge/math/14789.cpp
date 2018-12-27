#include<iostream>
#include<cstring>

using namespace std;

int main() {


	char cake[1005];
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		int k;
		bool ck = true;
		int cnt = 0;
		cin >> cake;
		int len = strlen(cake);
		cin >> k;

		for (int i = 0; i < len; i++) {
			if (cake[i] == '-') {
				if (i + k <= len) {
					for (int j = i; j < i + k; j++) {
						if (j <= len - 1) {
							if (cake[j] == '-') {
								cake[j] = '+';
							}
							else {
								cake[j] = '-';
							}
						}
					}

					cnt++;
				}
			}
		}
		for (int j = 0; j < len; j++) {
			if (cake[j] == '-') {
				ck = false;
			}
		}
		if (ck == true) {
			cout << "Case #" << i + 1 << ": " << cnt << endl;
		}
		else {
			cout << "Case #" << i + 1 << ": " << "IMPOSSIBLE" << endl;
		}

	}

	return 0;
}