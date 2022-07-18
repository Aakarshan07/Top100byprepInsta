#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int median;
    sort(arr,arr+n);
    if(n%2==0){
        median=(arr[n/2]+arr[n/2+1])/2;
    }
    else median=arr[n/2]/2;
    int sum=0;
    for(int i=0;i<n;i++){
        int x=arr[i]-median;
        if(x<0){
            sum+=-x;
        }
        else sum+=x;
    }
    cout<<"minimum absolute difference is:"<<sum;
    return 0;
}