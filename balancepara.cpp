#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    stack<char> ans;
    for(int i=0;i<input.length();i++){
        if(ans.empty()){
            ans.push(input[i]);
        }
        else if((ans.top()=='(' && input[i]==')') || (ans.top()=='<' && input[i]=='>') ||((ans.top()=='{' && input[i]=='}'))||(ans.top()=='[' && input[i]==']')){
            ans.pop();
        }
        else{
            ans.push(input[i]);
        }
    }
    if(ans.empty()){
        cout<<"true";
        return 0;
    }
    cout<<"false";
    return 0;
}