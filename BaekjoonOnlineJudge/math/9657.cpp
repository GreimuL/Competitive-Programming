#include<iostream>

using namespace std;
int ck[1005];
int main() {

	ck[1] = 1;
	ck[2] = 0;
	ck[3] = 1;
	ck[4] = 1;

	int n;
	cin >> n;
	
	for (int i = 5; i <= n; i++) {
		if (ck[i - 1] && ck[i - 3] && ck[i - 4]) {
			ck[i] = 0;
		}
		else {
			ck[i] = 1;
		}
	}

	if (ck[n]) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}
	return 0;
}