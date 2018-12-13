#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,j,k;
    int b[1000];
    int c[1000];
    char word[1000][21];
    
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %s",&b[i],word[i]);
        c[i]= strlen(word[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<c[i];j++)
        {
            for(k=0;k<b[i];k++)
            {
                printf("%c",word[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}