#include<iostream>

using namespace std;

int n, m;
int tree[500005];
int tree2[500005];
int xores(int ind) {
	int s = 0;
	while (ind > 0) {
		s ^= tree2[ind];
		ind -= (ind&-ind);
	}
	return s;
}
int xores2(int ind) {
	int s = 0;
	while (ind > 0) {
		s ^= tree[ind];
		ind -= (ind&-ind);
	}
	return s;
}
int xorres(int ind) {
	if (ind % 2 == 0) {
		return (xores(ind));
	}
	else {
		return (xores2(ind)) ^ (xores(ind));
	}
}
void update(int ind, int data, int data2) {
	while (ind <= n) {
		tree[ind] ^= data;
		tree2[ind] ^= data2;
		ind += (ind & -ind);
	}
}
void ud(int l, int r, int data) {
	if ((l - 1) % 2 == 0) {
		update(l, data, 0);
	}
	else {
		update(l, data, data);
	}
	if ((r) % 2 == 0) {
		update(r + 1, data, 0);
	}
	else {
		update(r + 1, data, data);
	}
}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		ud(i, i, a);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int t;
		cin >> t;
		if (t == 1) {
			int a, b, c;
			cin >> a >> b >> c;
			a++;
			b++;
			if (a < b) {
				ud(a, b, c);
			}
			else {
				ud(b, a, c);
			}
		}
		else {
			int a, b;
			cin >> a >> b;
			
			if (a < b) {
				b++;
				int res = xorres(b) ^ xorres(a);

				cout << res << "\n";
			}
			else {
				a++;
				int res = xorres(a) ^ xorres(b);
				cout << res << "\n";
			}
		}
	}
	return 0;
}