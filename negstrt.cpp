#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    while(l<r){
        if(arr[l]<0 && arr[r]<0){
            l++;
        }
        else if(arr[r]<0 && arr[l]>0){
            swap(arr[l],arr[r]);
        }
        else if(arr[l]>0 && arr[r]>0){
            r--;
        }
        else{
            l++;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}