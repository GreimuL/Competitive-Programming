#include<iostream>

using namespace std;

int bst[55][1100000];
int ck[55];


void insert(int data, int pos,int kind) {
	
	if (bst[kind][pos] == 0) {
		bst[kind][pos] = data;
		return;
	}

	if (data < bst[kind][pos]) {
		insert(data, pos * 2,kind);
	}
	else {
		insert(data, pos * 2 + 1,kind);
	}
}

int main() {

	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			int num;
			cin >> num;
			if (j == 0) {				
				bst[i][j+1] = num;
			}
			else {
				insert(num, 1, i);
			}
		}
	}
	int res = 0;
	bool ckc = true; 
	for (int i = 0; i < n; i++) {
		if (ck[i] == 0) {
			for (int j = i+1; j < n; j++) {
				ckc = true;
				if (ck[j] == 0) {
					for (int kk = 0; kk < 1100000; kk++) {
						if ((bst[i][kk] == 0 && bst[j][kk] == 0) || (bst[i][kk] != 0 && bst[j][kk] != 0)) {
							continue;
						}
						else {
							ckc = false;
						}
					}
					if (ckc == true) {
						ck[j] = 1;
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (ck[i] == 0) {
			res++;
		}
	}
	cout << res;

	return 0;
}