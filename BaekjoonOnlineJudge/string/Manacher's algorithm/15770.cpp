#include<iostream>
#include<cstring>
using namespace std;
char str[10005];
char sol[10005];
int B[20010];
int ind = 0;
int find2()
{
	int N = 2 * ind + 1;
	memset(B, 0, sizeof(B));
	B[0] = 0;
	B[1] = 1;
	int p = 1;
	int r = 2;
	int isym;
	int ex = -1;
	int di = -1;
	int sum = 0;
	int i;
	for (i = 2; i < N; i++)
	{
		isym = 2 * p - i;
		ex = 0;
		di = r - i;
		if (di > 0) {
			if (B[isym] < di) {
				B[i] = B[isym];
			}
			else if (B[isym] == di && i == N - 1) {
				B[i] = B[isym];
			}
			else if (B[isym] == di && i < N - 1) {
				B[i] = B[isym];
				ex = 1;
			}
			else if (B[isym] > di) {
				B[i] = di;
				ex = 1;
			}
		}
		else {
			B[i] = 0;
			ex = 1;
		}
		if (ex == 1) {
			while (((i + B[i]) < N && (i - B[i]) > 0) && (((i + B[i] + 1) % 2 == 0) || (sol[(i + B[i] + 1) / 2] == sol[(i - B[i] - 1) / 2]))) {
				B[i]++;
			}
		}
		if (i + B[i] > r) {
			p = i;
			r = i + B[i];
		}
		if (i % 2 == 1) {
			if (B[i] == 1) {
				continue;
			}
			sum += (B[i] - 1) / 2;
		}
		else {
			sum += B[i] / 2;
		}
	}
	sum += ind;
	return sum;
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int Q;
	cin >> Q;
	cin >> str;
	for (int i = 0; i < Q; i++) {
		if (str[i] == '-') {
			ind--;
			cout << find2() << " ";
		}
		else {
			sol[ind] = str[i];
			ind++;
			cout << find2() << " ";
		}
	}

	return 0;
}