#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"HCF is"<<__gcd(a,b)<<endl;
    cout<<"LCM is"<<(a*b)/__gcd(a,b);
    return 0;
}