#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    char num[60];
    long long length;
    long long k;
    long long btnum =0;
    long long second[60] ={0,};
    long long pos=0;
    long long btpos[60]={0,};
    long long temp=0;

    scanf("%s",num);
    cin>>k;

    length = strlen(num);

    for(long long i =0;i<length;i++)
    {
        if(num[i] == '1' ||num[i] == '2'||num[i] == '6'||num[i] == '7')
        {
            btnum++;
            btpos[temp] = i;
            temp++;
        }
    }

    temp = k-1;
    if(pow(2,btnum)>=k)
    {
        for(long long i=0;i<length;i++)
        {
            if(num[i] == '6')
            {
                num[i] = '1';
            }
            if(num[i] == '7')
            {
                num[i] = '2';
            }
        }
        while(temp!= 0)
        {
            second[pos] = temp%2;
            temp = temp/2;
            pos++;
        }
        for(long long i=0;i<btnum;i++)
        {
            if(second[btnum-i-1] ==1)
            {
                if(num[btpos[i]]=='1')
                {
                    num[btpos[i]] ='6';
                }
                if(num[btpos[i]]=='2')
                {
                    num[btpos[i]] ='7';
                }
            }
        }
        printf("%s",num);
    }
    else
    {
        printf("-1");
    }


    return 0;
}
