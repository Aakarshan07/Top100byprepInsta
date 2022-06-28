#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"enter value of number:";
    cin>>n1;
    int sum=0;
    while(n1){
        sum+=n1%10;
        n1=n1/10;
    }
    cout<<"sum of digit is"<<sum;
    return 0;
    }