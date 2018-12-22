#include<iostream>

using namespace std;

int num[1000001];

int main() {

	int n;
	int cnt = 0;
	int left, right;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	left = 0;
	right = n - 1;

	while (left< right) {

		if (num[left] == num[right]) {
			left++;
			right--;
		}
		else if (num[left] > num[right]) {
			right--;
			num[right] += num[right + 1];
			cnt++;
		}
		else if (num[left] < num[right]) {
			left++;
			num[left] += num[left - 1];
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}