#include<stdio.h>
int main()
{
    int a,i;
    int b[45];
    b[0] = 1;
    b[1] = 1;
    for(i=2;i<45;i++)
    {
        b[i] = b[i-1]+b[i-2];
    }
    scanf("%d",&a);
    printf("%d",b[a-1]);
    return 0;
    
}