#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int m, n;
int ground[55][55];
int check[55][55];

void search(int i,int j) {
		check[i][j] = 1;
		ground[i][j] = 0;
		if (i - 1 >= 0) {
			if (ground[i - 1][j] == 1 && check[i - 1][j] == 0) {
				search(i - 1,j);
			}
		}
		if (i + 1 < m) {
			if (ground[i + 1][j] == 1 && check[i + 1][j] == 0) {
				search(i + 1, j);
			}
				
		}
		if (j - 1 >= 0) {
			if (ground[i][j - 1] == 1 && check[i][j - 1] == 0) {
				search(i, j-1);
			}
			
		}
		if (j + 1 < n) {
			if (ground[i][j + 1] == 1 && check[i][j + 1] == 0) {
				search(i, j+1);
			}
		}
		
	
}

int main() {

	
	int k,x,y,T,result;
	cin >> T;
	for (int init = 0; init < T; init++) {
		memset(ground, 0, sizeof(ground));
		memset(check, 0, sizeof(check));
		result = 0;
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			ground[x][y] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (check[i][j] == 0&&ground[i][j] ==1) {
					search(i,j);
					result++;
				}
			}
		}
		cout << result<<"\n";

	}



	return 0;
}