#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number is prime or not ";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"not a prime number";
            return 0;
        }
    }
    cout<<"it is a prime number";
    return 0;
}

/*
int prime(int i,int n){
    if(i<n){
        if(n%i==0){
            return 0;
        }
        else prime(i+1,n);
        return 1;
    }
    return 0;
}
int main(){
    int n,i=2;
    cin>>n;
    if(prime(i,n)){
        cout<<"is a prime number";
        return 0;
    }
    else cout<<"not a prime";
    return 0;
}
*/