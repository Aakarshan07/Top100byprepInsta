#include<bits/stdc++.h>
using namespace std;
string removedub(string str){
    stack<char>stck;
    for(int i=0;i<str.length();i++){
        if(stck.empty() || stck.top()!=str[i]){
            stck.push(str[i]);
        }
        else stck.pop();
    }
    if(stck.empty()){
        return "empty string";
    }
    string result="";
    while(!stck.empty()){
        result=stck.top()+result;
        stck.pop();
    }
    return result;

}
int main(){
    string str;
    cin>>str;
    cout<<removedub(str);
    return 0;
}