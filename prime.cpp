#include<bits/stdc++.h>
using namespace std;
int isprime(int n,int i=2){
    if(n<=2){ 
        return (n==2)?1:0;
    }
    if(n%i==0){
        return 0;
    }
    if(i*i>n){ return 1;
    }
    return isprime(n,i+1);
}
int main(){
    int n;
    cin>>n;
    if(isprime(n))
        cout<<"is a prime number";
    else cout<<"is not a prime number";
}