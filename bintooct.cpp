#include<bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    cout<<stoi(number,0,2);
    int n=stoi(number,0,2);
    int ans=0,rem,i=1;
    while(n){
        rem=n%8;
        ans+=rem*i;
        n/=8;
        i*=10;
    }
    cout<<"answer is "<<ans;
}