#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count_0=0,count_1=0,count_2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count_0+=1;
        }
        else if(arr[i]==1){
            count_1+=1;
        }
        else if(arr[i]==2){
            count_2+=1;
        }
    }
    int j=0;
    while(count_0--){
        arr[j++]=0;
    }
    while(count_1--){
        arr[j++]=1;
    }
    while(count_2--){
        arr[j++]=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}