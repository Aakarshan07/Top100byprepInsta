#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    map<char,int> mp;
    for(int i=0;i<str1.length();i++){
        mp[str1[i]]++;
    }
    for(int i=0;i<str2.length();i++){
        mp[str2[i]]++;
    }
    for(auto itr :mp){
        if(itr.second==1){
            cout<<"not anagram"<<" ";
            return 0;
        }
    }
    cout<<"anagram"<<" ";
    return 0;
}