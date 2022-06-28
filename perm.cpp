#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);
    }
    else return 1;
}
int main(){
    int n,r;
    cout<<"enter no of people and no of seats"<<endl;
    cin>>n>>r;
    int p=factorial(n)/factorial(n-r);
    cout<<"no of permutations are:"<<p<<endl;
    return 0;
}