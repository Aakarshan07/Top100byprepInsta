#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"hcf of these number is:-"<<__gcd(n1,n2)<<endl;
    cout<<"lcm of these number is:-"<<(n1*n2)/__gcd(n1,n2);
   return 0;
}