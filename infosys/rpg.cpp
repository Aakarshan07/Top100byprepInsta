#include<bits/stdc++.h>
using namespace std;
int main(){
    int nmon,count=0;
    cin>>nmon;
    int exp;
    cin>>exp;
    vector<pair<int,int>> monster;
    int arr[nmon];
    for(int i;i<nmon;i++){
        cin>>arr[i];
    }
    int bonus[nmon];
    for(auto i : bonus){
        cin>>i;
    }
    for(int i=0;i<nmon;i++){
        monster.push_back(make_pair(arr[i],bonus[i]));
    }
    sort(monster.begin(),monster.end());
    for(auto i : monster){
        if(i.first<=exp){
            exp+=i.second;
            count++;
        }
        else{
            cout<<"monster defeated are "<<count<<" cannot win";
            return 0;
        }
    }
    cout<<count;
    return 0;
}