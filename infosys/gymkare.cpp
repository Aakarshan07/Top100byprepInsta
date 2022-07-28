#include<bits/stdc++.h>
using namespace std;
int gymkare(int e,int n,int arr[]){
    sort(arr,arr+n);
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>=e){
            ans=i+1;
            return ans;
        }
    }
    sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(2*sum>=e){
            ans=2*(i+1);
            return ans;
        }
    }
    return -1;
}
int main(){
    int e,n;
    cin>>e>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<gymkare(e,n,arr);
    return 0;
}