#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter number of pairs you will enter";
    int n;
    cin>>n;
    int arr[n][2];
    cout<<"enter pairs";
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][0]==arr[j][0] && arr[i][1]==arr[j][1]){
                cout<<"{"<<arr[i][0]<<","<<arr[i][1]<<"} and {"<<arr[j][0]<<","<<arr[j][1]<<"}";
            }
        }
    }
    return 0;
}