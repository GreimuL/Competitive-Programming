#include<iostream>
#include<cmath>
using namespace std;

int gcdcal(int a, int b) {
	int c;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int n;
	int num[100];
	int dif[5000];
	int inum[5000];
	int count = 0;
	int gcd;
	int gcd2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			dif[count] = abs(num[i] - num[j]);
			count++;
		}
	}
	gcd = gcdcal(dif[0], dif[1]);
	for (int i = 2; i < count; i++) {
		gcd2 = gcdcal(gcd, dif[i]);
		gcd = gcd2;
	}

	if (n == 2) {
		gcd = dif[0];
	}
	int abc = sqrt(gcd);
	int cnt = 0;
	for (int i = 1; i<=abc; i++) {
		if (gcd % i == 0) {
			if (i != 1) {
				cout << i << " ";
			}
			inum[cnt] = i;
			cnt++;	
		}
	}
	if (abc*abc == gcd) {
	
		for (int i = cnt-2; i >= 0; i--) {
			cout << gcd / inum[i] << " ";
		}
	}
	else {
		for (int i = cnt - 1; i >= 0; i--) {
			cout << gcd / inum[i] << " ";
		}
	}

}