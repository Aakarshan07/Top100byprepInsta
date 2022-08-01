#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum1=0;
        for(int j=i;j<n;j++){
            sum1+=arr[j];
            sum=max(sum,sum1);
        }
    }
    cout<<sum;
    return 0;
}