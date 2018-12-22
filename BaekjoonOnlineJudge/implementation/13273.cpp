#include<iostream>
#include<vector>
#include<sstream>
#include<cstring>
#include<string>
using namespace std;


string wor;

int makenumber(string a) {
	int num = 0;
	int length = a.size();
	int mult = 1;
	for (int i = 0; i < length; i++) {
		num += (a[length-i-1]-'0')*mult;
		mult *= 10;
	}
	return num;
}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		
		cin >> wor;

		if (isdigit(wor[0])) {
			int nn = makenumber(wor);
			int cnt = 0;
			if (nn >= 1000) {
				cnt += nn / 1000;
				nn = nn % 1000;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "M";
			}
			cnt = 0;
			if (nn >= 900) {
				cnt += nn / 900;
				nn = nn % 900;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "CM";
			}
			cnt = 0;
			if (nn >= 500) {
				cnt += nn / 500;
				nn = nn % 500;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "D";
			}
			cnt = 0;
			if (nn >= 400) {
				cnt += nn / 400;
				nn = nn % 400;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "CD";
			}
			cnt = 0;
			if (nn >= 100) {
				cnt += nn / 100;
				nn = nn % 100;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "C";
			}
			cnt = 0;
			if (nn >= 90) {
				cnt += nn / 90;
				nn = nn % 90;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "XC";
			}
			cnt = 0;
			if (nn >= 50) {
				cnt += nn / 50;
				nn = nn % 50;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "L";
			}
			cnt = 0;
			if (nn >= 40) {
				cnt += nn / 40;
				nn = nn % 40;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "XL";
			}
			cnt = 0;
			if (nn >= 10) {
				cnt += nn / 10;
				nn = nn % 10;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "X";
			}
			cnt = 0;
			if (nn >= 9) {
				cnt += nn / 9;
				nn = nn % 9;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "IX";
			}
			cnt = 0;
			if (nn >= 5) {
				cnt += nn / 5;
				nn = nn % 5;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "V";
			}
			cnt = 0;
			if (nn >= 4) {
				cnt += nn / 4;
				nn = nn % 4;
			}
			for (int j = 0; j < cnt; j++) {
				cout << "IV";
			}
			cnt = nn;
			for (int j = 0; j < cnt; j++) {
				cout << "I";
			}
			cout << "\n";
		}
		else {
			int stl = wor.size();
			int nm = 0;
			for (int j = 0; j < stl; j++) {
				if (j < stl - 1) {
					if (wor[j] == 'C'&&wor[j + 1] == 'M') {
						nm += 900;
						j++;
						continue;
					}
					if (wor[j] == 'C'&&wor[j + 1] == 'D') {
						nm += 400;
						j++;
						continue;
					}
					if (wor[j] == 'X'&&wor[j + 1] == 'C') {
						nm += 90;
						j++;
						continue;
					}
					if (wor[j] == 'X'&&wor[j + 1] == 'L') {
						nm += 40;
						j++;
						continue;
					}
					if (wor[j] == 'I'&&wor[j + 1] == 'X') {
						nm += 9;
						j++;
						continue;
					}
					if (wor[j] == 'I'&&wor[j + 1] == 'V') {
						nm += 4;
						j++;
						continue;
					}
				}
				if (wor[j] == 'M') {
					nm += 1000;
					continue;
				}
				if (wor[j] == 'D') {
					nm += 500;
					continue;
				}
				if (wor[j] == 'C') {
					nm += 100;
					continue;
				}
				if (wor[j] == 'L') {
					nm += 50;
					continue;
				}
				if (wor[j] == 'X') {
					nm += 10;
					continue;
				}
				if (wor[j] == 'V') {
					nm += 5;
					continue;
				}
				if (wor[j] == 'I') {
					nm += 1;
					continue;
				}
			}
			cout << nm << "\n";
		}
	}

	return 0;
}