#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e=0,o=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]&1==0){
            e++;
        }
        else o++;
    }
    cout<<"even "<<e<<" and odd "<<o;
    return 0;    
}