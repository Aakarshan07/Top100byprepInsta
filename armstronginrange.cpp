#include<bits/stdc++.h>
using namespace std;
void armstrong(int n){
    int n1=n,n2=n;
    int a=0;
    while(n2){
        n2/=10;
        a+=1;
    }
    int sum=0;
    while(n){
        sum+=pow((n%10),a);
        n/=10;
    }
    if(n1==sum){
        cout<<n1<<" ";
    }
}
int main(){
    int a,b;
    cout<<"enter value of range ";
    cin>>a>>b;
    while(a<=b){
        armstrong(a);
        a+=1;
    }
    return 0;
}