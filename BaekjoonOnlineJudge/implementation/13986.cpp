#include<iostream>
using namespace std;

char graph[55][55];
char last[55][55];
char str[55];

int main() {

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < m; j++) {
			graph[i][j] = str[j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			last[i][j] = '.';
		}
	}
	for (int i = 0; i < m; i++) {
		int hei = n - 1;
		for (int j = n-1; j >=0; j--) {
			if (graph[j][i] == 'o') {
				last[hei][i] = 'o';
				hei--;
			}
			else if (graph[j][i] == '#') {
				last[j][i] = '#';
				hei = j - 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << last[i][j];
		}
		cout << "\n";
	}
	return 0;
}