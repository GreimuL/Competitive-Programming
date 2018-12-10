#include<stdio.h>
int main()
{
    int x,i;
    int num = 0;
    int check = 0;
    scanf("%d",&x);
    if(x == 1||x == 2||x == 4||x == 8||x == 16||x == 32||x == 64)
    {
        printf("1");
        check = 1;
    }
    for(i=0;i<7;i++)
    {
        if(x%2 == 1)
        {
            x = x/2;
            num++;
        }
        if(x%2 == 0)
        {
            x = x/2;
        }
    }
    if(check==0)
    {
        printf("%d",num);
    }
    return 0;
}


