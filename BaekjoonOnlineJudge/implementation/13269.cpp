#include<iostream>
#include<algorithm>
using namespace std;

int graph[505][505];
int xa[505];
int ya[505];
int main() {

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> graph[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> xa[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> ya[i];
	}

	for (int i = 0; i < n; i++) {
		int ck = 0;
		for (int j = 0; j < m; j++) {
			if (graph[i][j] != 0) {
				ck = 1;
			}
		}
		if (ya[n - i - 1] != 0 && ck == 0) {
			cout << "-1";
			return 0;
		}
		if (ya[n - i - 1] == 0 && ck == 1) {
			cout << "-1";
			return 0;
		}
	}
	for (int j = 0; j < m; j++) {
		int ck = 0;
		for (int i = 0; i < n; i++) {
			if (graph[i][j] != 0) {
				ck = 1;
			}
		}
		if (xa[j] != 0&&ck==0) {
			cout << "-1";
			return 0;
		}
		if (xa[j] == 0 && ck == 1) {
			cout << "-1";
			return 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (graph[i][j] == 1) {
				graph[i][j] = min(xa[j], ya[n - i - 1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		int ma = 0;
		for (int j = 0; j < m; j++) {
			ma = max(graph[i][j], ma);
		}
		if (ma != ya[n - i - 1]) {
			cout << "-1";
			return 0;
		}

	}
	for (int j = 0; j < m; j++) {
		int ma = 0;
		for (int i = 0; i < n; i++) {
			ma = max(graph[i][j], ma);
		}
		if (ma != xa[j]) {
			cout << "-1";
			return 0;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << graph[i][j]<<" ";
		}
		cout << "\n";
	}
	return 0;
}