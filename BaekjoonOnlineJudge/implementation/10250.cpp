#include<iostream>
using namespace std;
int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int h,w,n;
        cin>>h>>w>>n;
        int a = n/h;
        int b = n%h;
        a++;
        if(b == 0){
            b = h;
            a--;
        }
        cout<<b;
        if(a<10){
            cout<<0<<a<<"\n";
        }
        else{
            cout<<a<<"\n";
        }
    }
    return 0;
}
