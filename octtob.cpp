#include<bits/stdc++.h>
using namespace std;
int main(){
    string octtod;
    cin>>octtod;
    long int n=stoi(octtod);
    while(n){
        if((n%10)==9){
            cout<<" is invalid input";
            return 1;
        }
        n/=10;
    }
    int ans=stoi(octtod,0,8);
     int rem,i=1;
    long long binary=0;
    while(ans){
        rem=ans%2;
        binary+=rem*i;
        ans/=2;
        i*=10;
    }
    cout<<"binary answer is "<<binary;
}