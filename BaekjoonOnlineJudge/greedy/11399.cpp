#include<iostream>
#include<algorithm>
using namespace std;

int p[1005];

int main() {
	int n;
	int result = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, p + n);

	for (int i = 0; i < n; i++) {
		if (i != 0) {
			p[i] += p[i - 1];
		}
	}
	for (int i = 0; i < n; i++) {
		result += p[i];
	}
	cout << result;
	return 0;
}