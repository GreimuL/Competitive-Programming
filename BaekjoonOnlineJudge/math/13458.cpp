#include<iostream>

using namespace std;

int te[1000005];

int main() {

	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> te[i];
	}
	int b, c;
	long long result = 0;
	cin >> b >> c;

	
		for (int i = 0; i < n; i++) {
			te[i] -= b;
			result++;
		}
		for (int i = 0; i < n; i++) {
			if (te[i] > 0) {
				if (te[i] % c == 0) {
					result += te[i] / c;
				}
				else {
					result += (te[i] / c) + 1;
				}
			}
		}
	

	cout << result;
	return 0;
}