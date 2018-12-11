#include<iostream>
#include<algorithm>
using namespace std;
long long lan[10005];
long long k, n;
long long pm(long long x) {
	long long res = 0;
	for (int i = 0; i < k; i++) {
		res += lan[i] / x;
	}
	return res;
}
int main() {
	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> lan[i];
	}
	sort(lan, lan + k);
	int x;
	long long le = 1;
	long long ri = 0x7fffffff;
	long long  mid = (le + ri) / 2;
	long long max = 0;
		while (le<=ri) {

			mid = (le + ri) / 2;
			if (pm(mid) >= n) {
				le = mid + 1;
				
			}
			else if (pm(mid) < n) {
				ri = mid - 1;
			}
		}
		cout << ri;
	
	return 0;
}