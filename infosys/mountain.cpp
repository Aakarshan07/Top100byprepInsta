#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mid=n/2;
        int j=mid-1;
        for(int i=mid+1;i<n;i++){
            if(arr[i]==arr[j]){
                break;
            }
            else{
                arr[i]=arr[j];
                j--;
            }
        }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

    