#include<iostream>
#include<cstring>
using namespace std;

int ala[27];
int alb[27];

int main() {

	char worda[35];
	char wordb[35];

	cin >> worda;
	cin >> wordb;

	int n = strlen(worda);
	int m = strlen(wordb);
	int poa;
	int pob;

	for (int i = 0; i < n; i++) {
		ala[worda[i] - 'A']++;
	}
	for (int i = 0; i < m; i++) {
		alb[wordb[i] - 'A']++;
	}
	for (int i = 0; i < n; i++) {
		if (ala[worda[i] - 'A'] > 0 && alb[worda[i] - 'A'] > 0) {
			poa = i;
			for (int j = 0; j < m; j++) {
				if (worda[i] == wordb[j]) {
					pob = j;
					break;
				}
			}
			break;
		}
	}
	int cna = 0;
	int cnb = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == pob && j == poa) {
				cout << worda[cna];
				cna++;
				cnb++;
			}
			if (i == pob) {
				if (cna < n) {
					cout << worda[cna];
					cna++;
				}
			}
			else if (j == poa) {
				if (cnb < m) {
					cout << wordb[cnb];
					cnb++; 
				}
			}
			else {
				cout << '.';
			}
		}
		cout << '\n';
	}
	return 0;
}