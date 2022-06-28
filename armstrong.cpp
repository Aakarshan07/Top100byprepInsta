#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    int n1=n;
    int n2=n;
    int sum=0;
    int a;
    while(n2){
        n2/=10;
        a+=1;
    }
    while(n){
        sum+=pow((n%10),a);
        n/=10;
    }
    if(n1==sum){
        cout<<"it is an armstrong number";
    }
    else cout<<"it is not an armstrong number";
    return 0;
}