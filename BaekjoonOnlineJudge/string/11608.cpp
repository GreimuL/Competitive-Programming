#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int al[26];
int ty;
char st[105];
int main(){
    cin>>st;
    int len = strlen(st);
    for(int i=0;i<len;i++){
        al[st[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(al[i]>=1){
            ty++;
        }
    }
    sort(al,al+26);
    cout<<len-al[25]-al[24];
}