#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n,m;
    cin>>n>>m;
    set<int> s;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        s.insert(temp);
    }
    for(int i=0;i<m;i++){
        cin>>temp;
        s.insert(temp);
    }
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}
*/
//intersect
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }    
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
        cout<<arr1[i]<<" ";
        i++;
        j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else {
            i++;
        }
    }
    return 0;
}