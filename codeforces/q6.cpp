#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   int temp=0,count=0;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(i==k-1){
        temp=x;
    }
    if(x!=0  && x>=temp){
        count++;
    }
   }
   cout<<count;
   return 0;
}