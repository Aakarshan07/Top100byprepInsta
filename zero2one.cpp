#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int n2=0;
    while(n1!=0){
        int f=n1%10;
        if(f==0){
            n2=n2*10+1;
        }
        else n2=n2*10+f;
        n1/=10;
    }
    int sum=0;
    while(n2){
        int c=n2%10;
        sum=sum*10+c;
        n2/=10;
    }
    cout<<sum;
    return 0;
}