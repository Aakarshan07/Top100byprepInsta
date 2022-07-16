#include<bits/stdc++.h>
using namespace std;
int checkequal(int arr[],int n){
    for(int i=0;i<n;i++){
        while(arr[i]%2==0){
            arr[i]/=2;
        }
        while(arr[i]%3==0){
            arr[i]/=3;
        }
        if(arr[i]!=arr[0]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(checkequal(arr,n)){
        cout<<"Yes";
    }
    else{ cout<<"No";}
    return 0;
}