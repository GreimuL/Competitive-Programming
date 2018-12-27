#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>> v;
int main() {
	int N, M;
	cin >> N >> M;
	int C1, C2;
	cin >> C1 >> C2;
	int POS;
	for (int i = 0; i < N; i++) {
		cin >> POS;
		v.push_back(make_pair(POS, 1));
	}
	for (int i = 0; i < M; i++) {
		cin >> POS;
		v.push_back(make_pair(POS, 2));
	}
	sort(v.begin(), v.end());
	int curpos,curtype,prepos,pretype;
	int mindis = 0x7fffffff;
	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		curpos = v[i].first;
		curtype = v[i].second;
		if(i!=0) {
			if (curtype != pretype) {
				if (mindis > curpos - prepos) {
					mindis = curpos - prepos;
					cnt = 1;
				}
				else if (mindis == curpos - prepos) {
					cnt++;
				}
			}
		}
		prepos = curpos;
		pretype = curtype;
	}
	cout <<mindis+abs(C1-C2)<<" "<< cnt;
	return 0;
}