#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int group=0;
    while(n>0){
        int x;
        cin>>x;
        static int prev=x;
        if(x!=prev){
            group++;
            prev=x;
        }

        n--;
    }
    cout<<group+1;
}