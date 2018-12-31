#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
using namespace std;

int rk[105];
int spd[105];
int node[105];
int delay[105];
vector<int> v[105];
int num;
queue<int> q;
void topo() {
	for (int i = 1; i <= num; i++) {
		if (node[i] == 0) {
			q.push(i);
		}
	}
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int iter : v[now]) {

			int dis = iter - now;
			int wei = dis * dis;
			if (iter == num + 1) {
				wei = 0;
			}
			if (delay[iter] < wei + spd[now] + delay[now]) {
				delay[iter] = wei + spd[now] + delay[now];
			}
			node[iter]--;
			if (node[iter] == 0) {
				q.push(iter);
			}
		}

	}
}

int main() {

	int maxrank = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> rk[i] >> spd[i];
		maxrank = max(rk[i], maxrank);
	}

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			if (rk[j] == rk[i]+1) {
				v[i].push_back(j);
				node[j]++;
			}
		}
	}
	for (int i = 1; i <= num; i++) {
		if (rk[i] == maxrank) {
			v[i].push_back(num+1);
			node[num + 1]++;
		}
	}
	topo();
	cout << delay[num + 1];
	return 0;
}