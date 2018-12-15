#include<iostream>

using namespace std;

int num[50][50][50];

int w(int a, int b, int c) {
	
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	if (a > 20 || b > 20 || c > 20) {
		return w(20, 20, 20);
	}
	if (num[a][b][c] != -1) {
		return num[a][b][c];
	}
	if (a < b&&b < c) {
		num[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	}
	else {
		num[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
	return num[a][b][c];

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			for (int k = 0; k < 50; k++) {
				num[i][j][k] = -1;
			}
		}
	}
	while (1) {

		int a, b, c;

		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1) {
			return 0;
		}

		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;

	}

	return 0;
}