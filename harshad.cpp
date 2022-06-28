#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1=n;
    int sum=0;
    while(n1!=0){
        sum+=n1%10;
        n1/=10;
    }
    if(n%sum==0){
        cout<<"it is a harshad number";
    }
    else cout<<"it is not a harshad number";
    return 0;
}