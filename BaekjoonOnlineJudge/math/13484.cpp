#include<iostream>

using namespace std;

int main() {

	int x, n,a;

	int remain=0;

	cin >> x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		remain += x;
		remain -= a;
	}
	remain += x;
	cout << remain;

	return 0;
}