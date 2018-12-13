#include<iostream>
#include<algorithm>
#define MAX 0x3f3f3f3f
using namespace std;

int NSIZE;
int W[20][20];
int D[20][1 << 16];

int tsp(int now, int vis) {
	if (vis == (1 << NSIZE) - 1) {
		if (W[now][0] != 0) {
			return W[now][0];
		}
		else {
			return MAX;
		}
	}
	if (D[now][vis] != MAX) {
		return D[now][vis];
	}
	D[now][vis] = MAX;
	for (int i = 0; i < NSIZE; i++) {
		if (vis & (1 << i)) {
			continue;
		}
		if (W[now][i] == 0) {
			continue;
		}
		D[now][vis] = min(D[now][vis], tsp(i, vis | (1 << i)) + W[now][i]);
	}
	return D[now][vis];
}
int main() {
	cin >> NSIZE;
	for (int i = 0; i < NSIZE; i++) {
		for (int j = 0; j < 1 << 16; j++) {
			D[i][j] = MAX;
		}
	}
	for (int i = 0; i < NSIZE; i++) {
		for (int j = 0; j < NSIZE; j++) {
			cin >> W[i][j];
		}
	}
	int distance = tsp(0, 1);
	cout << distance;
	return 0;
}