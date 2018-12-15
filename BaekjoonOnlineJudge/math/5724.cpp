#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		int result = 0;
		for (int i = 1; i <= n; i++) {
			result += i * i;
		}
		cout << result << "\n";
	}
	return 0;
}