#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int high;
    int x,y,w,h;
    int left1,left2,right1,right2;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    left1 = abs(x);
    left2 = abs(x-w);
    right1 =abs(y);
    right2 = abs(y-h);
    high=left1;
    if(high>left2)
    {
        high = left2;
    }
    if(high>right1)
    {
        high = right1;
    }
    if(high>right2)
    {
        high = right2;
    }
    printf("%d",high);
   return 0; 
}