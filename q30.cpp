#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    unordered_set<int>set;
    while(n>0){
        int x;
        cin>>x;
        set.insert(x);
        n--;
    }
    if(set.size()>4){
        cout<<0;
        return 0;
    }
    cout<<4-set.size();
}