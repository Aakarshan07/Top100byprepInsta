#include<bits/stdc++.h>
using namespace std;
int minJump(int arr[],int n){
    int jump[n];
    int i,j;
    jump[0]=0;
    for(i=1;i<n;i++){
        jump[i]=INT_MAX;
        for(j=0;j<i;j++){
            if(i<=j+arr[j] && jump[j]!=INT_MAX){
                jump[i]=min(jump[i],jump[j]+1);
                break;
            }
        }
    }
    return jump[n-1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minJump(arr,n);
}
