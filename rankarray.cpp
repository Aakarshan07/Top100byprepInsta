#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        temp[i]=arr[i];
    }
    sort(temp,temp+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(temp[j]==arr[i]){
                arr[i]=j+1;
                break;
            }
        }
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}