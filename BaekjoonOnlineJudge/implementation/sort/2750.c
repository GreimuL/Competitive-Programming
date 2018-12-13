#include<stdio.h>
int main()
{
    int num,i,j,changer;
    int a[1000];
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {
        scanf("%d",&a[i]);
        }
    
    for(i=0;i<num-1;i++)
        {
        for(j=0;j<num-1;j++)
            {
            if(a[j]>a[j+1])
                {
                changer=a[j];
                a[j]=a[j+1];
                a[j+1]=changer;
                
                }
            }
        }
    for(i=0;i<num;i++)
        {
        printf("%d\n",a[i]);
        }
     return 0;
}