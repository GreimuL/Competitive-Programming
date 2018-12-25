#include<iostream>

using namespace std;

int main()
 {
        int r,c,sum;
    int result=0;
    cin>>r>>c;
    sum= r*c;
    
    if((sum/2)%2==0)
        {
        result = sum/2/2 +sum/2;
        }
    else
        {
        result = sum/2/2  + sum/2;
        }
    cout<<sum/2<<" "<<sum-1;
    return 0;
 }