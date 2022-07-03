#include<bits/stdc++.h>
using namespace std;
int checkprime(int a){
    int cfact=0;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            cfact++;
        }
    }
    return cfact;
}
int main(){
    int n,x;
    int count=0;
    cout<<"last number of range";
    cin>>n;
    cout<<"enter required number of factors";
    cin>>x;
    for(int i=1;i<=n;i++){
        if(checkprime(i)==x){
            count++;
            cout<<i<<",";
        }
    }
    cout<<endl;
    cout<<"count is:"<<count;
    return 0;
}