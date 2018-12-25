#include<iostream>
using namespace std;

int house[100005];
int main() {

	int n, k, r;
	cin >> n >> k >> r;

	for (int i = 0; i<k; i++) {
		int ord;
		cin >> ord;
		house[ord] = 1;
	}
	int num = 0;
	int res = 0;
	for (int i = 1; i <= n - r + 1; i++) {
		for (int j = i; j<i + r; j++) {
			if (house[j] == 1) {
				num++;
			}
			if (num >= 2) {
				break;
			}
		}
		if (num==1) {
			res++;
			for (int j = i+r-1; j>0; j--) {
				if (house[j] == 0) {
					house[j] = 1;
					break;
				}
			}
		}
		else if(num==0) {
			res++;
			res++;
			int cnt = 0;
			for (int j = i + r - 1; j>0; j--) {
				if (house[j] == 0) {
					house[j] = 1;
					cnt++;
				}
				if (cnt == 2) {
					break;
				}
			}
		}
		num = 0;
	}
	cout << res;

	return 0;
}