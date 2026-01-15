#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int curr=0, max=0;
    while(n>0){
        int in,out;
        cin>>out>>in;
        curr=curr+in-out;
        if(curr>max){
            max=curr;
        }
        n--;
    }
    cout<<max;
}