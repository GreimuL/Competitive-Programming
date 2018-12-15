#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int an[1000005];

int main() {

	int len, n,t;
	double mid;
	int mini;
	int pos,pos2;
	cin >> t;

	for (int i = 0; i < t; i++) {
		mini = 0x7fffffff;
		int maxi = 0;
		cin >> len >> n;
		for (int j = 0; j < n; j++) {
			cin >> an[j];
		}
		sort(an, an + n);

		mid = len / 2;
		
		for (int j = 0; j < n; j++) {
			if (mini > abs(mid - an[j])) {
				pos = j;
				mini = abs(mid - an[j]);
			}
			if (maxi < abs(mid - an[j])) {
				pos2 = j;
				maxi = abs(mid - an[j]);
			}
		}
		if (an[pos] >= mid) {
			mini = len - an[pos];
		}
		else {
			mini = an[pos];
		}
		if (an[pos2] >= mid) {
			maxi = an[pos2];
		}
		else {
			maxi = len - an[pos2];
		}


		cout << mini<<" "<<maxi<<"\n";
	}
	

}