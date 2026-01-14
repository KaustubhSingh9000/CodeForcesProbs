#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_set<char>letters;
    for(int i=0;i<s.size();i++){
        letters.insert(s[i]);
    }
    if(letters.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}