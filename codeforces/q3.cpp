#include <bits/stdc++.h>
using namespace std;
void wordCheck(string s){
    if(s.size()<=10){
        cout<<s<<endl;
        return;
    }
    cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    return;
    

}
int main(){
    int n;
    cin>>n;
    vector<string>arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    for(auto x:arr){
        wordCheck(x);
    }
}