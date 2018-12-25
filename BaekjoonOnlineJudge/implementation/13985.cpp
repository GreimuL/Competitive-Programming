#include<iostream>
using namespace std;
int main() {

	int a, b, c;
	char dum;
	cin >> a >> dum >> b >> dum >> c;
	if (a + b == c) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}