#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int low=0,up=0;
    for(int i=0;i<s.size();i++){
        if(int(s[i])>96){
            low++;
        }
        else up++;
}  
    if(up<=low){
        for(int i=0;i<s.size();i++){
            if(int(s[i])<97){
                s[i]=s[i]+32;
            }
        }
        cout<<s;
    }
    else{
        for(int i=0;i<s.size();i++){
            if(int(s[i])>=97){
                s[i]=s[i]-32;
            }
        }
        cout<<s;
    }
}