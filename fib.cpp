#include<bits/stdc++.h>
using namespace std;
/*
int fibonacci(int n){
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    if(n==0){
        cout<<a;
    }
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<b<<" ";
    }
}
int main(){
    int n;
    cout<<"enter range";
    cin>>n;
    fibonacci(n);
}
*/
//recursion
int fib(int n){
  if(n<=1){
    return n;
  }  
  return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<" ";
    return 0;
}