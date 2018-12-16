#include<stdio.h>
int main()
{
    int a,b,i,c,j,count;
    int k[10000];
    j = 0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c);
        if(c<b)
        {
            k[j] = c;
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",k[i]);
    }
    return 0;
}