#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main() {
	
	int n;
	int tmp=-1;
	int k = 1;
	int x;
	cin >> n;

	n /= 52;

	while (1) {
		tmp = 21 * k;
		if ((n - tmp) % 7 == 0&&(n-tmp)/7<=100) {
			x = (n - tmp) / 7;
			break;
		}
		k++;
	}
	cout << x << "\n" << k << "\n";
	return 0;
}