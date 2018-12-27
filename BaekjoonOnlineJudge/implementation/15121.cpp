#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int tmp;
	int s;
	cin >> s;

	cout << s << ":\n";
	for (int i = 3; i <= s; i++) {
		int a,b;
		bool ck = true;
		int remain = s % i;
		if (remain == 0) {
			ck = false;
			a = i / 2;
			b = i - (i / 2);
		}
		else {
			a = remain;
			b = i - remain;
		}

		if (a < b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		if (remain != a && ck == true) {
			continue;
		}
		if (abs(a - b) > 1) {
			continue;
		}
		cout << a << "," << b << "\n";
	}





	return 0;
}