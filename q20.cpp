#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i=s1.size()-1;
    if(s1.size()!=s2.size()){
        cout<<"NO";
        return 0;
    }
    while(i>=0){
        if(s1[i]!=s2[s1.size()-1-i]){
            cout<<"NO";
            return 0;
        }
        
        i--;
    }
    cout<<"YES";
    return 0;
}