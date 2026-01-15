#include <bits/stdc++.h>
using namespace std;
int check(int n){
    unordered_set<int>set;
    int digits=0;
    while(n>0){
        int rem=n%10;
        set.insert(rem);
        n/=10;
        digits++;
    }
    if(digits==set.size()){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    while(true){
        n++;
        if(check(n)){
            break;
        }
        
    }
    cout<<n;

}