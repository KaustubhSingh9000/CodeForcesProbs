#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size()-1;j+=2){
            if(int(s[j])>int(s[j+2])){
                char temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    cout<<s;
}