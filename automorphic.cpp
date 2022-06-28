#include<bits/stdc++.h>
using namespace std;
int isautomorphic(int a,long int b){
        while(a!=0){
        if(a%10!=b%10){
            return 0;
        }
        else {
            a/=10;
            b/=10;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    long int sq=pow(n,2);
    (isautomorphic(n,sq)?cout<<"it is automorphic number with square:-"<<sq:cout<<"it is not automorphic with square:-"<<sq);
    return 0;
}