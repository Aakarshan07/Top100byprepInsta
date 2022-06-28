#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,d1,d2;
    cout<<"enter first fraction";
    cin>>n1>>d1;
    cout<<"enter second fraction";
    cin>>n2>>d2;
    int n3=(n1*d2)+(n2*d1);
    int d=d1*d2;
    int d3=__gcd(n3,d);
    cout<<"addition of two fraction is:"<<n3/d3<<"/"<<d/d3;
    return 0;
}