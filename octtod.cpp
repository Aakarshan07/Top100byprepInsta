#include<bits/stdc++.h>
using namespace std;
int main(){
    string octtod;
    cin>>octtod;
    long int n=stoi(octtod);
    cout<<n;
    while(n){
        if((n%10)==9){
            cout<<" is invalid input";
            return 1;
        }
        n/=10;
    }
    cout<<"decimal number is:"<<stoi(octtod,0,8);
    return 0;
}