#include<stdio.h>
int main()
{
    int a[3];
    int changer;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0]>=a[1])
    {
        changer =a[0];
        a[0] = a[1];
        a[1] = changer;
    }
    if(a[1]>=a[2])
    {
        changer =a[1];
        a[1] = a[2];
        a[2] = changer;
    }
        if(a[0]>=a[1])
    {
        changer =a[0];
        a[0] = a[1];
        a[1] = changer;
    }
    printf("%d",a[1]);
    return 0;
}