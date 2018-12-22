#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char str[100010];
char sol[200010];
int A[200010];
int ind = 0;
int charac = 0;
int find() {
	int r = 0;
	int p = 0;
	for (int i = 1; i <= ind; i++) {
		if (i <= r) {
			A[i] = min(A[2 * p - i], r - i);
		}
		else {
			A[i] = 0;
		}
		while (sol[i - A[i] - 2] == sol[i + A[i]]) {
			if (i - A[i] - 1 <= 0 && i + A[i] + 1 > ind) {
				break;
			}
			A[i]++;
		}
		if (r < i + A[i]) {
			r = i + A[i];
			p = i;
		}
	}

	int mx = 1;
    int length = 0;
	for (int i = 1; i <= ind; i++) {
        length = 0;
		if (A[i] == 0&&sol[i-1]!='#') {
			continue;
		}
		if (sol[i - 1] == '#') {
			length += A[i] / 2;
			if (A[i] % 2 != 0) {
				length++;
			}
            length*=2;
		}
		else {
			length += A[i] / 2;
			length *= 2;
            length++;
		}
        mx = max(length,mx);
		A[i] = 0;
	}
	return mx;
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '-') {
			sol[ind - 1] = '0';
			ind--;
			sol[ind - 1] = '0';
			ind--;
			charac--;
		}
		else {
			if (ind == 0) {
				sol[ind] = str[i];
				ind++;
				charac++;
				continue;
			}
			sol[ind] = '#';
			ind++;
			sol[ind] = str[i];
			ind++;
			charac++;
		}
	}
    cout<<find();

	return 0;
}