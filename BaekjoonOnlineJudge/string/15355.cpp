#include<iostream>
#include<cstring>
using namespace std;

int word[50001][26];
int aa[26];
int bb[26];
int main() {

	char st[50002];
	int a, b, c, d;
	bool ck = true;
	cin >> st;

	int q;
	cin >> q;
	int len = strlen(st);

	for (int i = 0; i < len; i++) {
		if (i != 0) {
			for (int j = 0; j < 26; j++) {
				word[i][j] += word[i - 1][j];
			}
		}
		word[i][st[i] - 'a']++;
	}
	for (int i = 0; i < q; i++) {
		ck = true;
		cin >> a >> b >> c >> d;
		if (a - b != c - d) {
			cout << "NE\n";
		}
		else {
			for (int j = 0; j < 26; j++) {
				if (a == 1) {
					aa[j] += word[b - 1][j];
				}
				else {
					aa[j] += word[b - 1][j] - word[a - 2][j];
				}
				if (c == 1) {
					bb[j] += word[d - 1][j];
				}
				else {
					bb[j] += word[d - 1][j] - word[c - 2][j];
				}
			}
			for (int j = 0; j < 26; j++) {
				if (aa[j] != bb[j]) {
					ck = false;
					cout << "NE\n";
					break;
				}
			}
			if (ck == true) {
				cout << "DA\n";
			}
		}
		memset(aa, 0, sizeof(aa));
		memset(bb, 0, sizeof(bb));
	}


	return 0;
}