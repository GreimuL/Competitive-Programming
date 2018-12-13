#include<stdio.h>
int main()
{


      int a, i;
      long long b[91];
      b[0] = 0;
      b[1] = 1;
      for (i = 2; i < 91; i++)
      {
         b[i] = b[i - 1] + b[i - 2];

      }
      scanf("%d", &a);
      printf("%lld\n", b[a]);
 
   return 0;
}