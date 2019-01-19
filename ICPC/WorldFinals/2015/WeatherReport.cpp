#include<cstdio>
#include<queue>
#include<functional>
#include<cmath>
#define ll long long
using namespace std;

double arr[4];
priority_queue<pair<double,ll>, vector<pair<double,ll>>, greater<pair<double,ll>>> pq;
int n;
ll calcnt(ll a, ll b, ll c, ll d) {
	ll tot = 1;
	ll fir = 1;
	ll sec = 1;
	ll thi = 1;
	ll fort = 1;
	for (ll i = 1; i <= n; i++) {
		tot *= i;
	}
	for (ll i = 1; i <= a; i++) {
		fir *= i;
	}
	for (ll i = 1; i <= b; i++) {
		sec *= i;
	}
	for (ll i = 1; i <= c; i++) {
		thi *= i;
	}
	for (ll i = 1; i <= d; i++) {
		fort *= i;
	}
	tot /= fir;
	tot /= sec;
	tot /= thi;
	tot /= fort;
	return tot;
}

int main() {
	double ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < 4; i++) {
		scanf("%lf", &arr[i]);
	}
	for (int i = n; i >= 0; i--) {
		for (int j = 0; j <= n - i; j++) {
			for (int k = 0; k <= n - i - j; k++) {
				int g = n - i - j - k;
				ll cnt = calcnt(i, j, k, g);
				pq.push(make_pair((pow(arr[0], i)*pow(arr[1], j)*pow(arr[2], k)*pow(arr[3], g)),cnt));
			}
		}
	}
	while (!pq.empty()) {
		if (pq.size() == 1&&pq.top().second==1) {
			break;
		}
		pair<double, ll> le = pq.top();
		pq.pop();
		if (le.second == 1) {
			pair<double, ll> ri = pq.top();
			pq.pop();
			ans += le.first + ri.first;
			pq.push(make_pair(le.first + ri.first, 1));
			if (ri.second > 1) {
				pq.push(make_pair(ri.first,ri.second-1));
			}
		}
		else {
			if (le.second % 2 == 0) {
				ans += 2 * le.first*(le.second / 2);
				pq.push(make_pair(le.first*2, le.second / 2));
			}
			else {
				ans += 2 * le.first*(le.second / 2);
				pq.push(make_pair(le.first, 1));
				pq.push(make_pair(le.first*2, le.second / 2));
			}
		}	
	}
	printf("%.6lf", ans);
	return 0;
}