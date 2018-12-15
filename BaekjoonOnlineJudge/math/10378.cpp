#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	int w, h;
	cin >> w >> h;
	
	int lf, rf;
	int uf, df;

	lf = x3 - x1;
	rf = x2 - x4;
	uf = y2 - y4;
	df = y3 - y1;

	if (w <= lf && h <= y2 - y1) {
		cout << "Yes";
		return 0;
	}
	if (w <= rf && h <= y2 - y1) {
		cout << "Yes";
		return 0;
	}
	if (h <= uf && w <= x2 - x1) {
		cout << "Yes";
		return 0;
	}
	if (h <= df && w <= x2 - x1) {
		cout << "Yes";
		return 0;
	}
	cout << "No";
	return 0;
}