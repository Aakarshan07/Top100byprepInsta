#include<bits/stdc++.h>
using namespace std;
int prime(int x){
    if(x<2){
        return 0;
    }
    else{
        for(int i=2;i<sqrt(x);i++){
            if(x%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int a,b;
    cout<<"enter lower and upper boundary:";
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}