#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i;
    cout<<"enter number of elements you want in both array";
    cin>>m>>n;
    int arr1[m],arr2[n];
    set<int> s;
    for(i=0;i<m;i++){
        cin>>arr1[i];
        s.insert(arr1[i]);
    }
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        if(s.find(arr2[i])!=s.end()){
            cout<<"array are not disjoint";
            return 0;
        }
    }
    cout<<"arrays are disjoint";
    return 1;
}