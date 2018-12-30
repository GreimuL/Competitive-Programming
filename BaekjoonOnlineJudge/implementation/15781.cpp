#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int n,m;
    int hel[1001];
    int arm[1001];
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        cin>>hel[i];
    }
    for(int i=0;i<m;i++){
        cin>>arm[i];
    }
    
    sort(hel,hel+n);
    sort(arm,arm+m);
    
    cout<<hel[n-1]+arm[m-1];
}