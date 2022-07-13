#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
            while(arr[i]==arr[i+1]){
                i++;
            }
        }
    }
    if(arr[n-1]==arr[n-2]){
        cout<<arr[n-1]<<" ";
    }
    return 0;
}