#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n ";
    cin>>n;
    int n1=n;
    int n2,newnum=0;
    while(n){
        n2=n%10;
        newnum*=10;
        newnum+=n2;
        n=n/10;   
    }
    if(newnum==n1){
        cout<<"it is a pallindrome"<<endl;
    }
    else cout<<"not a pallindrome";
    return 0;
    }