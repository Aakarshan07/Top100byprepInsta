#include<bits/stdc++.h>
using namespace std;
int f(int s,int e,int n){
    int cur=1,i;
    if(e==n+1){
        return 0;
    }
    for(i=s;i<e+s;i++){
        cur*=i;
    }
    return cur+f(i,cur+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<f(1,1,n);
    return 0;
}