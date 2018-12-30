#include<iostream>

using namespace std;
int main(){
    
    int n,k;
    int multi;
    int num=0;
    cin>>n>>k;
    
    for(int i=0;i<k;i++){
        cin>>multi;
        
        if(multi%2==0){
            num += multi/2;
        }
        else{
            num += multi/2;
            num++;
        }
    }
    
    if(n>num){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
    return 0;
}