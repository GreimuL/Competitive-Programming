#include<iostream>
#define ll long long
using namespace std;

ll p[105];

int main() {

	p[0] = 1;
	p[1] = 1;
	p[2] = 1;
	p[3] = 2;
	p[4] = 2;
	p[5] = 3;
	p[6] = 4;

	for (ll i = 7; i < 105; i++) {
		p[i] = p[i - 2] + p[i - 3];
	}

	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		ll n;
		cin >> n;
		cout << p[n-1]<<"\n";
	}

	return 0;
}