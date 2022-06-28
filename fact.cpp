#include<bits/stdc++.h>
using namespace std;
long double fact(int n){
    if(n>=1){
        return (n*fact(n-1));
    }
    else return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}