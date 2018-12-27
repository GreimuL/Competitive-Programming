#include<iostream>
#include<cstring>

using namespace std;
char s[105];
int len;
bool ckpel(int le, int ri) {
	int size = (ri - le + 1) / 2;

	for (int i = 0; i < size; i++) {
		if (s[le] == s[ri]) {
			le++;
			ri--;
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {

	
	cin >> s;

	len = strlen(s);

	for (int i = 0; i < len; i++) {
		for (int j = i+1; j < len-i; j++) {
			if (ckpel(i, j)) {
				if ((j - i+1) % 2 == 0) {
					cout << "Or not.";
					return 0;
				}
			}
			
		}
	}
	cout << "Odd.";
	return 0;
}