#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    set<int> s(arr.begin(),arr.end());
    set<int>::iterator itr=s.begin();
    advance(itr,k-1);
    cout<<"minimum:"<<*itr<<endl;
    itr=s.begin();
    advance(itr,n-k);
    cout<<"maximum:"<<*itr<<endl;
    return 0;
}