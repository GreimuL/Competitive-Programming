#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#define PI 3.14159265358979323846
using namespace std;
vector<int> v;
int arrange[1005];
int main() {
	int t, k;
	double angle, ans;
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
		angle = (180 - 360 / k)*(PI / 180);
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
			ans += (arrange[ij] * sin(angle)*arrange[ij + 1] / 2);
		}
		ans += (arrange[k - 1] * sin(angle)*arrange[0] / 2);
		printf("Case #%d: %.9lf\n", i + 1, ans);
	}
	return 0;
}