#include<iostream>
#define ll long long
using namespace std;
int main() {
	ll n;
	ll k;
	cin >> n >> k;
	ll re = k / n;
	ll cn = 0;
	while (1) {
		if (n > k) {
			break;
		}
		k -= n;
		cn++;
		n *= 2;
	}
	cout << cn;
	return 0;
}