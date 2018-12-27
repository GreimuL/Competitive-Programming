#include<iostream>
#define ll long long
using namespace std;
int main() {
	ll n;
	cin >> n;
	ll tmp = n*(n - 1) / 2;
	ll m = 0;

	while (1) {
		if (m*(m - 1) > tmp) {		
			break;
		}
		m++;
	}
	cout << n-m+1;
	return 0;
}