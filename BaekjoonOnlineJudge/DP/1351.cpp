#include<cstdio>
#include<map>
#define ll long long
using namespace std;

map<ll, ll> ma;

ll inf(ll n, ll p, ll q) {
	if (ma[n] == 0) {
		ma[n] = inf(n / p, p, q) + inf(n / q, p, q);
	}
	return ma[n];
}

int main() {
	ma[0] = 1;
	ll n, p, q;
	scanf("%lld %lld %lld", &n, &p, &q);
	inf(n, p, q);
	printf("%lld", ma[n]);


}