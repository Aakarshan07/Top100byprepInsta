#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int>a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        mp[m]++;
    }
    vector<pair<int,int>> v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),cmp);
    for(int i=v.size()-1;i>=0;i--){
        while(v[i].second){
            cout<<v[i].first<<" ";
            v[i].second--;
        }
    }
    return 0;
}