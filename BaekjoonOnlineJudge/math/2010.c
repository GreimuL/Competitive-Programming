#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i;
    int* plug;
    int sum = 0;
    scanf("%d",&num);
    plug = (int*)malloc(sizeof(int)*num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&plug[i]);
        sum += plug[i];
    }
    printf("%d",sum-num+1);
    return 0;
}