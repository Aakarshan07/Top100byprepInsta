#include<bits/stdc++.h>
using namespace std;
void generatePara(int n,int open,int close,string s,vector<string> &ans){
    if(open==n&& close==n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        generatePara(n,open+1,close,s+"{",ans);
    }
    if(close<open){
        generatePara(n,open,close+1,s+"}",ans);
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> ans;
    generatePara(n,0,0,"",ans);
    for(auto i=ans.begin();i!=ans.end();i++){
        cout<<*i<<endl;
    }
}