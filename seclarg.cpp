#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    cout<<arr[n-2];
    return 0;
}