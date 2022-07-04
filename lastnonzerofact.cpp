#include<bits/stdc++.h>
using namespace std;
int lastnondigit(int n){
    int dig[]={1,1,2,6,4,2,2,4,2,8};
        if(n<10){
            return dig[n];
        }
        if(((n/10)%10)%2==0){ //check if tens digit is odd or even
            return (6*lastnondigit(n/5)*dig[n%10])%10;
        }
        else
            return (4*lastnondigit(n/5)*dig[n%10])%10;
}
int main(){
    int n;
    cin>>n;
    cout<<lastnondigit(n);
    return 0;
}