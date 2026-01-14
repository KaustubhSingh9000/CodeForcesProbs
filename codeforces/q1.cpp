#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int anton=0,danik=0;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(c=='A'){
            anton++;
            continue;
        }
        danik++;
    }
    if(anton>danik){
        cout<<"Anton";
        return 0;
    }
    else if(danik>anton){
        cout<<"Danik";
        return 0;
    }
    cout<<"Friendship";
    return 0;
}