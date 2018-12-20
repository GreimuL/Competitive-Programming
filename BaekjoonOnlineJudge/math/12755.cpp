#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int n;
	int number;
	int numtype = 0;
	int div = 10;
	int div2 = 1;
	char num[10];

	cin >> n;

	for (int i = 0; i <= 100000000; i++) {
		if (1 <= i&&i <= 9) {
			n--;
			numtype = 1;
		}
		else if (10 <= i && i <= 99) {
			n -= 2;
			numtype = 2;
		}
		else if (100 <= i && i <= 999) {
			n -= 3;
			numtype = 3;
		}
		else if (1000 <= i && i <= 9999) {
			n -= 4;
			numtype = 4;
		}
		else if (10000 <= i && i <= 99999) {
			n -= 5;
			numtype = 5;
		}
		else if (100000 <= i && i <= 999999) {
			n -= 6;
			numtype = 6;
		}
		else if (1000000 <= i && i <= 9999999) {
			n -= 7;
			numtype = 7;
		}
		else if (10000000 <= i && i <= 99999999) {
			n -= 8;
			numtype = 8;
		}
		else if (100000000 <= i) {
			n -= 9;
			numtype = 9;
		}
		

		if (n <= 0) {
			number = i;
			break;
		}
	}

	/*cout << numtype << endl;
	cout << n << endl;
	cout << number<<endl;*/
	n = -n;

	for (int i = 0; i < n; i++) {
		div *= 10;
		div2 *= 10;
	}

	cout << ((number%div)-(number%div2))/div2;

}