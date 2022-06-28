#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem,i=1;
    long long binary=0;
    while(num){
        rem=num%2;
        binary+=rem*i;
        num/=2;
        i*=10;
    }
    cout<<"binary number is "<<binary;
}