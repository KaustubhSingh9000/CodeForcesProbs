#include <bits/stdc++.h>
using namespace std;
int check(char c1,char c2){
    int n1=c1,n2=c2;
    if(n1<97){
        n1+=32;
    }
    if(n2<97){
        n2+=32;
    }
    if(n1>n2){
        return 1;
    }
    else if(n2>n1){
        return -1;
    }
    return 0;
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++){
        int ans=check(s1[i],s2[i]);
        if(ans==1){
            cout<<ans;
            return 0;
        }
        else if(ans==-1){
            cout<<ans;
            return 0;
        }
    }
    cout<<0;
    return 0;
}