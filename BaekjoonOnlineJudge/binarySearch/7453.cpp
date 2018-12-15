#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;


ll aa[4005];
ll bb[4005];
ll cc[4005];
ll dd[4005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
vector<ll> ab(n*n);
vector<ll> cd(n*n);
	for (int i = 0; i < n; i++) {
		cin >> aa[i] >> bb[i] >> cc[i] >> dd[i];
	}
    ll tmp =0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ab[tmp]=(aa[i]+bb[j]);
			cd[tmp] =(cc[i]+dd[j]);
            tmp++;
		}
	}
	
	sort(ab.begin(),ab.end());
	sort(cd.begin(),cd.end());

	ll cnt = 0;

	for (ll i = 0; i < ab.size(); i++) {
		pair<vector<ll>::iterator, vector<ll>::iterator> bd = equal_range(cd.begin(), cd.end(), -ab[i]);
		ll len = (bd.second - cd.begin()) - (bd.first - cd.begin());
		cnt += len;
	}


	cout << cnt;

	return 0;
}