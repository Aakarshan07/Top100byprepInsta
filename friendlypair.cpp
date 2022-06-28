#include<bits/stdc++.h>
using namespace std;
int factorssum(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int sum1=factorssum(n1);
    int sum2=factorssum(n2);
    if(sum1/n1==sum2/n2){
        cout<<"they are friendly pair";
    }
    else cout<<"not friendly pair";
    return 0;
}