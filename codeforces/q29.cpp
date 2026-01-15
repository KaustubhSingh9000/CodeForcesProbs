#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tmep=n;
    double percent=0;
    while(tmep>0){
        int x;
        cin>>x;
        percent+=x/100.0;
        tmep--;

    }
    cout<<fixed<<setprecision(12)<<percent*100/n;
}