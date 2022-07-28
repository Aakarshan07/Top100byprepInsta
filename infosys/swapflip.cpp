#include<bits/stdc++.h>
using namespace std;
string s;
int n,cash,a,b;
int f1;
int swap(){
    for(int i=0;i<s.length();i++){
        if(s[i]=='i'){
            f1=i;
            break;
        }
    }
    int j=s.length()-1;
    while(j>i){
        
    }
}
int main(){
    cin>>s>>n>>cash>>a>>b;
    if(a<b){
        swap();
        flip();
    }
    else{
        flip();
        swap();
    }
    cout<<stoul(str,0,2);
    return 0;
}