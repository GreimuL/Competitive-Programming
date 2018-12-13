#include<iostream>
#define ll long long
using namespace std;

ll tree[1000005];

ll n, m;
ll func(ll x) {
	ll res = 0;
	for (int i = 0; i < n; i++) {
		if (tree[i] - x > 0) {
			res += tree[i] - x;
		}
	}
	return res;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
	}

	ll le = 0;
	ll ri = 0x7fffffff;
	ll mid = (le + ri) / 2;
	while (le <= ri) {
		mid = (le + ri) / 2;
		if (func(mid) >= m) {
			le = mid + 1;
		}
		else {
			ri = mid - 1;
		}
	}

	cout << ri;

	return 0;
}