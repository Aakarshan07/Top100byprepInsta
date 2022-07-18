#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i;
    cin>>n>>m;
    int arr1[n],arr2[m];
    unordered_map<int,int> mp;
    cout<<"enter elements of array you want to sort";
    for(i=0;i<n;i++){
        cin>>arr1[i];
        mp[arr1[i]]++;
    }
    cout<<"enter elements of array you use as reference";
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> res;
    for(i=0;i<m;i++){
        int t=mp[arr2[i]];
        while(t){
            res.push_back(arr2[i]);
            t--;
            mp.erase(arr2[i]);
        }
    }
    for(auto x: mp){
        int t=x.second;
        while(t){
            res.push_back(x.first);
            t--;
        }
    }
    for(auto x :res){
        cout<<x<<" ";
    }
    return 0;
}