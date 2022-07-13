#include<bits/stdc++.h>
using namespace std;
int ispallindrome(int n){
    int temp=n,rev=0;
    while(temp>0){
        int rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(rev==n){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i++){
        if(ispallindrome(arr[i])){
            cout<<arr[i];
            break;
        }
    }
    return 0;
}