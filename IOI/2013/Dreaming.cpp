#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
#include<cstring>
using namespace std;
vector<pair<int, int>> v[100005];
vector<int> leaf;
vector<int> path;
vector<pair<int,int>> root;
vector<pair<int, int>> fcost;
bool vis[100005];
int cost[100005];
int cost2[100005];
bool del[100005];
int sizecnt[100005];

void findleaf(int i) {
	if (vis[i] == 1) {
		return;
	}
	vis[i] = 1;
	if (v[i].size() == 1 || v[i].size() == 0) {
		leaf.push_back(i);
	}
	for (auto j : v[i]) {
		findleaf(j.first);
	}
}
void findroot() {
	priority_queue<pair<pair<int, int>,pair<int,int>>,vector<pair<pair<int,int>,pair<int,int>>>,greater<pair<pair<int,int>,pair<int,int>>>> q;
	if (v[leaf[0]].size()==0) {
		root.push_back(make_pair(0, leaf[0]));
		return;
	}
	for (auto i : leaf) {
		q.push(make_pair(make_pair(v[i][0].second, v[i][0].first),make_pair(i,v[i][0].second)));
	}
	while (!q.empty()) {
		pair<pair<int, int>,pair<int,int>> now = q.top();
		q.pop();
		int nowpos = now.first.second;
		int nowcost = now.first.first;
		int prepos = now.second.first;

		int cnt = 0;
		del[prepos] = 1;
		sizecnt[nowpos]++;
		//cost[nowpos] = max(cost[nowpos], now.second.second+ cost[prepos]);
		
		if (cost[nowpos] < now.second.second + cost[prepos]) {
			cost2[nowpos] = cost[nowpos];
			cost[nowpos] = now.second.second + cost[prepos];
		}
		else if (cost2[nowpos] < now.second.second + cost[prepos]) {
			cost2[nowpos] = now.second.second + cost[prepos];
		}


		int nextpos;
		int nextcost;
		if (v[nowpos].size() - sizecnt[nowpos] > 2) {
			continue;
		}
		for (int i = 0; i < v[nowpos].size(); i++) {
			if (del[v[nowpos][i].first] == 0) {
				cnt++;
				nextpos = i;
				nextcost = v[nowpos][i].second;
			}
		}

		if (cnt == 1) {	
			q.push(make_pair(make_pair(v[nowpos][nextpos].second+nowcost, v[nowpos][nextpos].first), make_pair(nowpos,nextcost)));
		}
		else if (cnt == 0) {
			root.push_back(make_pair(cost[nowpos],nowpos));
			return;
		}

	}
}
int main() {

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int N, M, L;
	cin >> N >> M >> L;
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}

	for (int i = 0; i < N; i++) {
		leaf.clear();
		if (vis[i] == 1) {
			continue;
		}
		findleaf(i);
		findroot();
	}

	sort(root.begin(), root.end());

	int maxv = root[root.size() - 1].second;
	for(auto i: root){
		if (i.second == maxv) {
			continue;
		}
		v[i.second].push_back(make_pair(maxv, L));
		v[maxv].push_back(make_pair(i.second, L));
	}

	root.clear();
	leaf.clear();
	memset(del, 0, sizeof(del));
	memset(cost, 0, sizeof(cost));
	memset(vis, 0, sizeof(vis));
	memset(sizecnt, 0, sizeof(sizecnt));
	findleaf(0);
	findroot();

	/*for (int i = 0; i < N; i++) {
		fcost.push_back(make_pair(cost[i], i));
	}
	sort(fcost.begin(), fcost.end());
	*/
	cout << cost2[root[0].second]+cost[root[0].second];
	

	return 0;
}