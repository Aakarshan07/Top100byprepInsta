#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    int ma=ans,mi=ans;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(ma,mi);
        }
        int ma=max(arr[i],ma*arr[i]);
        int mi=min(arr[i],mi*arr[i]);
        ans=max(ans,ma);
    }
    cout<<ans;
    return 0;
}