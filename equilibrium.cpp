#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lsum=0,rsum=0;
    int mid=n/2;
    for(int i=0;i<mid;i++){
        lsum+=arr[i];
    }
    for(int i=n-1;i>mid;i--){
        rsum+=arr[i];
    }
    if(rsum>lsum){
        while(rsum>lsum && mid<n-1){
            rsum-=arr[mid+1];
            lsum+=arr[mid];
            mid++;
        }
    }
    else{
        while(lsum>rsum && mid>0){
            rsum+=arr[mid];
            lsum-=arr[mid-1];
            mid--;
        }
    }
    if(lsum==rsum){
        cout<<"equilibrium point is at "<<mid;
    }
    else{
        cout<<"first point of equilibrium is at -1";
    }
    return 0;
}