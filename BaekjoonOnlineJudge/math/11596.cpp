#include<iostream>
#include<algorithm>
using namespace std;
int a[3];
int b[3];
int main(){
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    sort(a,a+3);
    sort(b,b+3);
    if(a[2]*a[2] == a[1]*a[1]+a[0]*a[0]){
         if(a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2]){
            cout<<"YES";
            return 0;
        }
    } 
    cout<<"NO";
    return 0;
}