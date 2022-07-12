#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    int mid=arr.size()/2;
    sort(arr.begin(),arr.begin()+n/2);
    sort(arr.begin()+n/2,arr.begin()+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}