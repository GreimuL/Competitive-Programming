#include<iostream>
#define MAX 0x7fffffff
using namespace std;

int graph[105][105];

int main() {

	for (int i = 0; i < 105; i++) {
		for (int j = 0; j < 105; j++) {
			graph[i][j] = MAX;
		}
	}
	
	int n,m;
	cin >> n>>m;
	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (graph[a][b] == 0 || graph[a][b] > c) {
			graph[a][b] = c;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (j == k) {
					continue;
				}
				if (graph[j][i] != MAX && graph[i][k] != MAX && graph[j][k] > graph[j][i] + graph[i][k]) {
					graph[j][k] = graph[j][i] + graph[i][k];
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (graph[i][j] != MAX) {
				cout << graph[i][j] << " ";
			}
			else {
				cout << 0 << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}