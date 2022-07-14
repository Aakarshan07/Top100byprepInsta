#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"enter elements in first array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter elements in second array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int product=0;
    for(int i=0;i<n;i++){
        product+=arr1[i]*arr2[i];
    }
    cout<<"product is:"<<product;
    return 0;
}