#include<bits/stdc++.h>
using namespace std;
int counter(int n,int k){
    int count=0;
        for(int i=1;i<=n;i++){
            for(int j;j<=k;j++){
                if(j%i==0){
                    count++;
                }
            }
        }
        return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n;
    }
    else if(k==2){
        cout<<counter(n,k);
    }
    return 0;
}