#include <cstdio>
using namespace std;

int main() {

	int d,ans;

	scanf("%d", &d);

	d = d % 100;

	if (d == 0 || d == 10 || d == 30 || d == 60 || d == 100)
		ans = 0;
	else if (1 <= d&&d <= 9 || 11 <= d&&d <= 15 || 25 <= d&&d <= 29 || 31 <= d&&d <= 35 || 55 <= d&&d <= 59 || 61 <= d&&d <= 65 || 95 <= d&&d <= 99)
		ans = 1;
	else if (16 <= d&&d <= 24 || 36 <= d&&d <= 40 || 50 <= d&&d <= 54 || 66 <= d&&d <= 70 || 90 <= d&&d <= 94)
		ans = 2;
	else if (41 <= d&&d <= 49 || 71 <= d&&d <= 75 || 85 <= d&&d <= 89)
		ans = 3;
	else ans = 4;

	printf("%d", ans);
	return 0;
}