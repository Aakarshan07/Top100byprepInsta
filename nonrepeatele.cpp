#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second==1){
            cout<<itr->first<<" ";
        }
    }
    return 0;
}