#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	
	while (1) {
		bool ck = true;
		n++;
		int tmp = n;
		while (tmp != 0)
		{
			if (tmp % 10 == 0) {
				ck = false;
				break;
			}
			tmp /= 10;
		}

		if (ck != false) {
			cout << n;
			return 0;
		}
	}


	return 0;
}