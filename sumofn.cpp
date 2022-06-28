#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n;
    cout <<"enter value of n:";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=i;
    }
    cout<<"sum is:"<<sum;
    return 0;
}
*/

// using recursion

int sumofn(int n){
    int sum=0;
    if(n>=1){
        sum=n+sumofn(n-1);
        return 0;
    }
    else return sum;
}
int main(){
    int a;
    cin>>a;
    cout<<sumofn(a);
}