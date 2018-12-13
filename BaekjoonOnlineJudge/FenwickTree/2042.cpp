#include<iostream>
#define ll long long
using namespace std;

ll tree[1000005];
ll input[1000005];
int n;
void update(int ind, ll data) {
	while (ind <= n) {
		tree[ind] += data;
		ind += (ind&-ind);
	}
}
ll sum(int ind) {
	ll s = 0;
	while (ind > 0) {
		s += tree[ind];
		ind -= (ind&-ind);
	}
	return s;
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int  m, k;

	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) {
		cin >> input[i];
		update(i, input[i]);
	}
	for (int i = 1; i <= m + k; i++) {
		int a, b, c;
		cin >> a;
		if (a == 1) {
			int ind;
			ll change;
			cin >> ind >> change;
			update(ind, change - input[ind]);
			input[ind] = change;
		}
		else {
			int fir, sec;
			cin >> fir >> sec;

			cout << sum(sec) - sum(fir-1)<<"\n";
		}
	}

	return 0;
}