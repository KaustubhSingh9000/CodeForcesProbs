#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int change=0;
    while(k>0){
    for(int i=0;i<n-1;i++){

        if(s[i]=='B'&&s[i+1]=='G'){
            char temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
            }
           
        
        
        }
        k--;
    }
    cout<<s;

}