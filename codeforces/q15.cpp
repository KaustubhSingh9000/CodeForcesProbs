#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n-1;){
        int skip=1;
        for(int j=i+1;j<n;j++){
            if(s[i]!=s[j]){
               
                break;
            }
            count++;
            skip++;
        }
        i+=skip;
    }
    cout<<count;
}