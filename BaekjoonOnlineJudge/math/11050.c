#include<stdio.h>
int main()
{
    int a,b,i;
    int result;
    result = 1;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        result = result*(a-i);
    }
    for(i=0;i<b;i++)
    {
        result = result/(i+1);
    }
    printf("%d",result);
    return 0;
}