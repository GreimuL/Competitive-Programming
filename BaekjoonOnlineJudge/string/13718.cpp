#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int num[1000];
char word[510];
char com[510][30];
char ans[1000];
int main() {
	int n, m, k, x;
	int orr = 0;
	int cnt = 0;

	cin >> n >> m >> k >> x;
	cin >> word;
	for (int i = 0; i < m; i++) {
		cin >> com[i];
		sort(com[i], com[i] + k);
	}
	x--;
	while (x != 0) {
		num[cnt] = x % k;
		x /= k;
		cnt++;
	}
	

	int co = 0;
	for (int i = 0; i < strlen(word); i++) {
		if (word[i] != '#') {
			cout << word[i];
		}
		else{
			cout << com[co][num[m-1]];
			co++;
			m--;
		}
	}


	return 0;
}