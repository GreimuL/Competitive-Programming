#include<iostream>
#include<cstring>
using namespace std;

//six 1 x, zero 2 z, two 3 w, four 4 u, five 5 f, one 6 o, seven 7 s, eight 8 g,nine n 9, three 10

int num[10];
int alpha[26];

int main(){

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		memset(alpha, 0, sizeof(alpha));
		memset(num, 0, sizeof(num));
		char wor[2005];

		cin >> wor;
		
		int len = strlen(wor);
		for (int j = 0; j < len; j++) {
			alpha[tolower(wor[j]) - 'a']++;
		}
		if (alpha['x'-'a'] > 0) {
			num[6] += alpha['x' - 'a'];
			alpha['s' - 'a'] -= alpha['x' - 'a'];
			alpha['i' - 'a'] -= alpha['x' - 'a'];
			alpha['x' - 'a'] = 0;
		}
		if (alpha['z' - 'a'] > 0) {
			num[0] += alpha['z' - 'a'];
			alpha['e' - 'a'] -= alpha['z' - 'a'];
			alpha['r' - 'a'] -= alpha['z' - 'a'];
			alpha['o' - 'a'] -= alpha['z' - 'a'];
			alpha['z' - 'a'] = 0;
		}
		if (alpha['w' - 'a'] > 0) {
			num[2] += alpha['w' - 'a'];
			alpha['t' - 'a'] -= alpha['w' - 'a'];
			alpha['o' - 'a'] -= alpha['w' - 'a'];
			alpha['w' - 'a'] = 0;
		}
		if (alpha['u' - 'a'] > 0) {
			num[4] += alpha['u' - 'a'];
			alpha['f' - 'a'] -= alpha['u' - 'a'];
			alpha['o' - 'a'] -= alpha['u' - 'a'];
			alpha['r' - 'a'] -= alpha['u' - 'a'];
			alpha['u' - 'a'] = 0;
		}
		if (alpha['f' - 'a'] > 0) {
			num[5] += alpha['f' - 'a'];
			alpha['i' - 'a'] -= alpha['f' - 'a'];
			alpha['v' - 'a'] -= alpha['f' - 'a'];
			alpha['e' - 'a'] -= alpha['f' - 'a'];
			alpha['f' - 'a'] = 0;
		}
		if (alpha['o' - 'a'] > 0) {
			num[1] += alpha['o' - 'a'];
			alpha['n' - 'a'] -= alpha['o' - 'a'];
			alpha['e' - 'a'] -= alpha['o' - 'a'];
			alpha['o' - 'a'] = 0;
		}
		if (alpha['s' - 'a'] > 0) {
			num[7] += alpha['s' - 'a'];
			alpha['e' - 'a'] -= alpha['s' - 'a'];
			alpha['v' - 'a'] -= alpha['s' - 'a'];
			alpha['e' - 'a'] -= alpha['s' - 'a'];
			alpha['n' - 'a'] -= alpha['s' - 'a'];
			alpha['s' - 'a'] = 0;
		}
		if (alpha['g' - 'a'] > 0) {
			num[8] += alpha['g' - 'a'];
			alpha['e' - 'a'] -= alpha['g' - 'a'];
			alpha['i' - 'a'] -= alpha['g' - 'a'];
			alpha['h' - 'a'] -= alpha['g' - 'a'];
			alpha['t' - 'a'] -= alpha['g' - 'a'];
			alpha['g' - 'a'] = 0;
		}
		if (alpha['n' - 'a'] > 0) {
			alpha['n' - 'a'] /= 2;
			num[9] += alpha['n' - 'a'];
			alpha['i' - 'a'] -= alpha['n' - 'a'];
			alpha['v' - 'a'] -= alpha['n' - 'a'];
			alpha['e' - 'a'] -= alpha['n' - 'a'];
			alpha['n' - 'a'] = 0;
		}
		if (alpha['t' - 'a'] > 0) {
			num[3] += alpha['t' - 'a'];
			alpha['h' - 'a'] -= alpha['t' - 'a'];
			alpha['r' - 'a'] -= alpha['t' - 'a'];
			alpha['e' - 'a'] -= alpha['t' - 'a'];
			alpha['e' - 'a'] -= alpha['t' - 'a'];
			alpha['t' - 'a'] = 0;
		}
		cout << "Case #" << i + 1 << ": ";
		for (int j = 0; j < 10; j++) {
			if (num[j] > 0) {
				for (int k = 0; k < num[j]; k++) {
					cout << j;
				}
			}
		}
		cout << endl;
	}

	return 0;
}