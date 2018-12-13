#include<iostream>

using namespace std;

int main()
    {
    int max=0;
    int index,num;
    
    for(int i=0;i<9;i++){
        cin>>num;
        if(num>max){
            max=num;
                index=i+1;
            }
        }
    cout<<max<<endl<<index;
    return 0;
    }