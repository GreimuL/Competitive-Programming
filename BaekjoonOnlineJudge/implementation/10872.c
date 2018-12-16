#include<stdio.h>
int main()
{
    int a,i;
    long b;
    b=1;
    scanf("%d",&a);
    for(i=1;i<a+1;i++)
    {
        b = b*i;
    }
    printf("%ld",b);
    return 0;
}