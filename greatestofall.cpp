#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter value of n1,n2 and n3"<<endl;
    cin>>n1>>n2>>n3;
    (n1>n2 && n1>n3)?cout<<n1<<" is greatest of all":(n2>n1 && n2>n3)?cout<<n2<<" is greatest of all":cout<<n3<<" is greatest of all";
    return 0;
    }