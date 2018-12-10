#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long num,i,j,changer;
    long long* number;
    
    scanf("%lld",&num);
    number = (long long*)malloc(sizeof(long long)*num);
    
    for(i=0;i<num;i++)
    {
        scanf("%lld",&number[i]);
    }
    
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(number[j]>number[j+1])
            {
                changer = number[j];
                number[j] = number[j+1];
                number[j+1] = changer;
            }
        }
    }
    printf("%lld",number[0]*number[num-1]);
    return 0;
}