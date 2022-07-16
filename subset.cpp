#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<m;i++){
        if(s.find(arr2[i])==s.end()){
            cout<<"not a subset";
            return 0;
        }
    }
    cout<<"is a subset";
    return 0;
}