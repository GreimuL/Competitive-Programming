#include<iostream>

using namespace std;

int main() {
	int n, m,B;
	int miscount = 0;
	cin >> n >> m;

	int *A = new int[m];
	int *score = new int[n];

	for (int i = 0; i < n; i++) {
		score[i] = 0;
	}

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> B;
			if (A[i] == B) {
				score[j]++;
			}
			else {
				miscount++;
			}
		}
		score[A[i]-1] += miscount;
		miscount = 0;
	}

	for (int i = 0; i < n; i++) {
		cout << score[i] << '\n';
	}

}