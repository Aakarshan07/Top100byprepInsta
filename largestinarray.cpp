#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    if(n==1) return arr[0];

    return max(arr[n-1],largest(arr,n-1));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Largest element:"<<largest(arr,n);
    return 0;
}