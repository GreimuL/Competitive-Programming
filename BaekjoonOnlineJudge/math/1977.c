#include<stdio.h>
int main()
{
    int a,b,i;
    int count = 0;
    int fcheck=0;
    int fnum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=100;i++)
    {
        if(i*i>=a&&i*i<=b&&fcheck ==0)
        {
            fnum = i*i;
            fcheck = 1;
        }
        if(i*i>=a&&i*i<=b)
        {
            count += i*i;
        }
    }
    if(count>0)
    {
        printf("%d\n%d",count,fnum);
    }
    else
    {
        printf("-1");
    }
    return 0;
}