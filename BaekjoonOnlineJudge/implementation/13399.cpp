#include<iostream>

using namespace std; 

int num[200002];
int input[100002];
int main() {

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> input[i];
	}

	for (int j = m - 1; j >= 0; j--) {
		if (num[input[j]] == 0) {
			cout << input[j] << "\n";
		}
		num[input[j]] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (num[i] == 0) {
			cout << i << "\n";
		}
	}
	return 0;
}