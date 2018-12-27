#include<iostream>
#include<cstdio>
#include<cmath>
#define num 100000000

int arr[num];
int primearr[5761460];
int cnt;
using namespace std;

void prime2() {
	for (int i = 2; i*i < num; i++){
		if (!arr[i]){
			for (int j = i * i; j < num; j += i){
				arr[j] = 1;
            }
        }
    }
	arr[1] = 1;
	for (int i = 0; i < num; i++) {
		if (arr[i] == 0) {
			primearr[cnt] = i;
			cnt++;
		}
	}
}
int main() {
	prime2();

	int left = 0;
	int right = cnt - 1;
	int n;
	int tempn;
	int x, y, z, w;
	while (scanf("%d", &n) != EOF) {
		if (n < 8) {
			cout << "Impossible.\n";
		}
		else {
			if (n % 2 == 0) {
				x = 2;
				y = 2;

				n -= (x + y);

				for (int i = 0; i < cnt; i++) {
					tempn = n - primearr[i];
					if (arr[tempn] == 0) {
						z = tempn;
						w = primearr[i];
						break;
					}
				}

				cout << x << " " << y << " " << z << " " << w << "\n";


			}
			else {
				x = 2;
				y = 3;

				n -= (x + y);
				for (int i = 0; i < cnt; i++) {
					tempn = n - primearr[i];
					if (arr[tempn] == 0) {
						z = tempn;
						w = primearr[i];
						break;
					}
				}
				cout << x << " " << y << " " << z << " " << w << "\n";
			}
		}
	}

	return 0;
}