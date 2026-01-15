#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int width=0;
    while(n>0){
        int h;
        cin>>h;
        if(h>m){
            width+=2;
        }
        else width++;
        n--;

    }
    cout<<width;
}