#include<iostream>
#include<queue>
#include<cstdio>
#include<algorithm>

using namespace std;

int n;
int ma[30][30];
int result = 0;
int dx[8] = { -1,0,1,0};
int dy[8] = { 0,1,0,-1};
queue<pair<int, int>> q;
int cnt = 0;
void bfs(int i, int j) {

	q.push(make_pair(i, j));
	ma[i][j] = 0;
	while (!q.empty()) {
		pair<int, int> now = q.front();

		q.pop();
		cnt++;

		for (int ii = 0; ii < 4; ii++) {
			if (now.first + dx[ii] >= 0 || now.first + dx[ii] < n || now.second + dy[ii] >= 0 || now.second + dy[ii] < n) {
				if (ma[now.first + dx[ii]][now.second + dy[ii]] == 1) {
					q.push({now.first+dx[ii],now.second+dy[ii]});
					ma[now.first + dx[ii]][now.second + dy[ii]] = 0;
				}
			}
		}

	}

}

int main() {

	int house[700];
	int nn = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &ma[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ma[i][j] == 1) {
				result++;
				bfs(i, j);
				house[nn] = cnt;
				nn++;
				cnt = 0;
			}
		}
	}
	sort(house, house + nn);
	cout << result<<"\n";

	for (int i = 0; i < nn; i++) {
		cout << house[i]<<"\n";
	}
	return 0;
}