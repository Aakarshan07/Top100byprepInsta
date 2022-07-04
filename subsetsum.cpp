#include<bits/stdc++.h>
using namespace std;
/*void subset(int arr[],int l,int r,int sum=0){
    if(l>r){
        cout<<sum<<" ";
        return;
    }
    subset(arr,l+1,r,sum+arr[l]);
    subset(arr,l+1,r,sum);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subset(arr,0,n-1,0);
    return 0;
}
*/
//different way

int main(){
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<pow(2,n);j++){
        sum=0;
        cout<<"{";
        for(int i=0;i<n;i++){
            if(j & (1<<i)){ //we
                cout<<arr[i]<<",";
                sum+=arr[i];
            }
        }
        cout<<"}  sum is:"<<sum<<endl;
    }
}
