#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int pos = 0;
	int *num;
	int move;
	num = new int[n];

	for (int i = 0; i < n; i++) {

		cin >> num[i];
	}

	move = num[pos];
	num[pos] = NULL;
	cout << pos+1<<" ";
	if (move > 0) {
		for (int i = 0; i < move; i++) {
			pos++;
			if (pos >= n) {
				pos = 0;
			}
			while (num[pos] == NULL) {
				pos++;
				if (pos >= n) {
					pos = 0;
				}
			}
		}
	}
	else {
		move = -move;
		for (int i = 0; i <move; i++) {
			pos--;
			if (pos < 0) {
				pos = n - 1;
			}
			while (num[pos] == NULL) {
				pos--;
				if (pos <0) {
					pos = n-1;
				}
			}
		}
	}
	for (int i = 1; i < n-1; i++) {

		move = num[pos];
		num[pos] = NULL;
		cout << pos + 1 << " ";
		if (move > 0) {
			for (int i = 0; i < move; i++) {
				pos++;
				if (pos >= n) {
					pos = 0;
				}
				while (num[pos] == NULL) {
					pos++;
					if (pos >= n) {
						pos = 0;
					}
				}
			}
		}
		else {
			move = -move;
			for (int i = 0; i <move; i++) {
				pos--;
				if (pos < 0) {
					pos = n - 1;
				}
				while (num[pos] == NULL) {
					pos--;
					if (pos <0) {
						pos = n - 1;
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (num[i] != NULL) {
			cout << i + 1;
			break;
		}
	}
	

	return 0;
}