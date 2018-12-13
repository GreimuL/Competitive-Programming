#include<iostream>
#include<algorithm>
using namespace std;

int r[100005];

int main() {

	int n;
	int k = 1;
	int maxw = 0;
	int pw;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> r[i];
	}

	sort(r, r + n);

	for (int i = n-1; i >=0; i--) {
		pw = r[i] * k;
		if (maxw < pw) {
			maxw = pw;
		}
		k++;
	}
	cout << maxw;
	return 0;
}