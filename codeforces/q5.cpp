#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int plus=0,minus=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[1]=='+'){
            plus++;
        }
        else minus++;
    }
    cout<<plus-minus;
    return 0;
}