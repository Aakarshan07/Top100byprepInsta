#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    map<char,int> mp;
    for(int i=0;str[i]!='\0';i++){
        mp[str[i]]++;
    }
    for(auto itr:mp){
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    return 0;
}