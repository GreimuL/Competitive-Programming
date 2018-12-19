#include<iostream>
#define ll long long
using namespace std;

ll dis[1005];
ll found[1005];
ll via[1005];
ll graph[1005][1005];

int main() {

	for (int i = 0; i < 1005; i++) {
		for (int j = 0; j < 1005; j++) {
			graph[i][j] = 0x7fffffff;
		}
	}
	for (int i = 0; i < 1005; i++) {
		dis[i] = 0x7fffffff;
	}

	ll n, m;

	cin >> n >> m;

	for (int i =0; i < m; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		if (graph[a][b] > c) {
			graph[a][b] = c;
		}
	}
	ll st, fi;
	cin >> st >> fi;
	dis[st]=0;
	for (int i = 0; i < n; i++) {
		int x = 0;
		for (int j = 0; j <= n; j++) {
			if(found[j] ==0&& dis[x] >dis[j]){
				x = j;
			}
		}
		if (x == 0) {
			break;
		}
		found[x] = 1;
		for (int j = 1; j <= n; j++) {
			if (dis[j] > dis[x] + graph[x][j]) {
				dis[j] = dis[x] + graph[x][j];
				via[j] = x;
			}
		}
	}

	cout << dis[fi];
}