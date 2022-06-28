#include<bits/stdc++.h>
using namespace std;
int prime(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int flag=0;
    int last=n;
    for(int i=1;i<n;i++){
        last-=1;
        if(i+last==n && prime(i) && prime(last)){
            cout<<i<<"+"<<last<<endl;
            flag=1;
        }
    }
    if(!flag) {cout<<"cannot express";}
    return 0;
}