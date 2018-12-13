#include<stdio.h>
int main()
{
    int i,j;
    int a;
    int count = 0;
    int result[3];
    for(j=0;j<3;j++)
    {
    for(i=0;i<4;i++)
    {
        scanf("%d",&a);
        if(a == 0)
        {
            count ++;
        }
    }
        result[j] = count;
        count = 0;
    }
    for(i=0;i<3;i++)
    {
    if(result[i] ==0)
    {
        printf("E\n");
    }
    if(result[i] ==1)
    {
        printf("A\n");
    }
        if(result[i] ==2)
    {
        printf("B\n");
    }
        if(result[i] ==3)
    {
        printf("C\n");
    }
        if(result[i] ==4)
    {
        printf("D\n");
    }
    }
    return 0;
}