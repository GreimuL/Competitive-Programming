#include<iostream>
#include<queue>
using namespace std;

int ma[1005][1005];

queue<pair<int, int>> q;

int dirx[4] = { -1,0,1,0 };
int diry[4] = { 0,1,0,-1 };

int n, m;
bool ck = true;
void bfs(int a,int b) {

	q.push(make_pair(a, b));
	ma[a][b] = 1;
	while (!q.empty()) {
		pair<int,int> now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nex = now.first + dirx[i];
			int ney = now.second + diry[i];
			
			if (nex >= 0 && nex < n&&ney >= 0 && ney < m&&ma[nex][ney] ==0) {
				if (nex == n-1) {
					cout << "YES";
					ck = false;
					return;
				}
				q.push(make_pair(nex, ney));
				ma[nex][ney] = 1;
			}


		}

	}

}

int main() {


	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &ma[i][j]);
		}
	}


	for (int i = 0; i < n; i++) {
		if(ma[0][i]==0){
			if (ck == true) {
				bfs(0, i);
			}
		}
	}
	if (ck == true) {
		cout << "NO";
	}
	return 0;
}