#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;        
    }
    return ans;
}
/*
  if(n==0)
    {return 1;}
return n*fact(n-1);
*/
int main(){
    int n,m;
    cin>>n;
    m=n;
    int mul=0;
    while(n){
        mul+=fact(n%10);
        n/=10;
    }
    if(mul==m)
        cout<<mul<<" is a strong number";
    else cout<<"not strong number";
    return 0;
}