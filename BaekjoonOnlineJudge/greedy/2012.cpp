#include<iostream>
#include<algorithm>
#include<cmath>
long long num[500001];

using namespace std;

int main() {

	long long n;
	long long sum = 0;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);

	for (long long i = 1; i <= n; i ++) {
		sum += abs(num[i - 1] - i);
	}

	cout << sum;

	return 0;
}