#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
vector<int> v;
int arrange[10005];
int main() {
	int t, k;
	int ans;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		ans = 0;
		v.clear();
		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			int tmp;
			scanf("%d", &tmp);
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		int tp = 0;
		for (int ij = 0; ij < k; ij++) {
			if (ij % 2 == 0) {
				arrange[tp] = v[ij];
			}
			else {
				arrange[k - tp-1] = v[ij];
				tp++;
			}
		}
		for (int ij = 0; ij < k - 1; ij++) {
			if (abs(arrange[ij] - arrange[ij + 1]) > ans) {
				ans = abs(arrange[ij] - arrange[ij + 1]);
			}
		}
		if (abs(arrange[k-1] - arrange[0]) > ans) {
			ans = abs(arrange[k - 1] - arrange[0]);
		}
		printf("%d\n", ans);
	}
	return 0;
}