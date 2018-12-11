#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> v[105];
vector<int> b;
vector<int> w;
queue<int> q;
bool ckck = true;
int ck[105];
int lv[105];
void bfs(int a) {
	lv[a] = 0;
	q.push(a);
	ck[a] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		
		for (int i = 0; i < v[now].size(); i++) {
			if (ck[v[now][i]] == 0) {
				lv[v[now][i]] += lv[now] + 1;
				q.push(v[now][i]);
				ck[v[now][i]] = 1;
			}
		}
		ckck = false;
	}
}

void bfs2(int a) {
	lv[a] = 1;
	q.push(a);
	ck[a] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();

		for (int i = 0; i < v[now].size(); i++) {
			if (ck[v[now][i]] == 0) {

				lv[v[now][i]] += lv[now] + 1;
				q.push(v[now][i]);
				ck[v[now][i]] = 1;
			}
		}
		ckck = false;
	}
}

int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int tn;
		cin >> tn;
		for (int j = 0; j < tn; j++) {
			int th;
			cin >> th;
			v[i].push_back(th);
			v[th].push_back(i);
		}
	}
	bool sw = true;
	for (int i = 1; i <= n; i++) {
		if (ck[i] == 0 && sw == true) {
			bfs(i);
			sw = false;
		}
		else if (ck[i] == 0 && sw == false) {
			bfs2(i);
			sw = true;
		}
	
	}

	for (int i = 1; i <= n; i++) {
		if (lv[i] % 2 == 0) {
			b.push_back(i);
		}
		else {
			w.push_back(i);
		}
	}
	sort(b.begin(), b.end());
	sort(w.begin(), w.end());

	cout << b.size()<<"\n";
	for (auto i : b) {
		cout << i << " ";
	}
	cout << "\n";
	cout << w.size() << "\n";
	for (auto i : w) {
		cout << i << " ";
	}
	return 0;
}