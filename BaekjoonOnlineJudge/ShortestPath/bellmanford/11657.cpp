#include<iostream>
#include<vector>

#define ll long long
#define MAX 0x7fffffff

using namespace std;

ll graph[505][505];
ll dis[505];
int main() {

	for (int i = 0; i < 505; i++) {
		dis[i] = MAX;
	}
	for (int i = 0; i < 505; i++) {
		for (int j = 0; j < 505; j++) {
			graph[i][j] = MAX;
		}
	}


	int n, m;
	cin >> n >> m;

	int A, B, C;
	for (int i = 0; i < m; i++) {
		cin >> A >> B >> C;	
		if (graph[A][B] > C) {
			graph[A][B] = C;
		}
	}

	dis[1] = 0;
	int c = false;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (graph[j][k] != MAX) {
					if (dis[j]<MAX&&dis[k] > dis[j] + graph[j][k]) {
						dis[k] = dis[j] + graph[j][k];
						if (i == n -1) {
							c = true;
						}
					}
				}
			}
		}
	}
	if (c) {
		cout << -1;
	}
	else {
		for (int i = 2; i <= n; i++) {
			if (dis[i] < MAX) {
				cout << dis[i]<<"\n";
			}
			else {
				cout << -1<<"\n";
			}
		}
	}

	return 0;
}