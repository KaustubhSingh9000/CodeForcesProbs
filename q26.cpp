#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rooms=0;
    while(n>0){
        int are,could;
        cin>>are>>could;
        if(are<could-1){
            rooms++;
        }
        n--;
    }
    cout<<rooms;
}