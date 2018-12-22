#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char nick[100];
	char remain[100];
	int i;

	scanf("%d",&n);
	getchar();
	for ( i = 0; i < n; i++) {
		gets(nick);
		int j = 0;
		while (nick[j] != '\0') {
			if (nick[j] == ' ') {
				printf("god");
				int k = j+1;
				while (nick[k] != '\0') {
					if (nick[k] != ' ') {
                        printf("%c",nick[k]);
					}
					k++;
				}
				break;
			}
			
			j++;
		}
		printf("\n");
	}



}