#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem,i=1;
    long long binary=0;
    while(num){
        rem=num%8;
        binary+=rem*i;
        num/=8;
        i*=10;
    }
    cout<<"octal number is "<<binary;
}