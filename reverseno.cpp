#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n ";
    cin>>n;
    int n2,newnum=0;
    while(n){
        n2=n%10;
        newnum*=10;
        newnum+=n2;
        n=n/10;   
    }
    cout<<newnum;
    return 0;
    }