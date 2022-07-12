#include<bits/stdc++.h>
using namespace std;
int sumarr(int arr[],int i,int n){
    if(i==n-1){
        return arr[i];
    }
    return sumarr(arr,i+1,n)+arr[i];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumarr(arr,0,n);
    return 0;
}