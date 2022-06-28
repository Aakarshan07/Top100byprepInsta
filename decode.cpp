#include<bits/stdc++.h>
using namespace std;
int main(){
    char dig[15];
    cout<<"enter the sequence";
    cin>>dig;
    int a=strlen(dig);
    int count[a+1];
    count[0]=1;
    count[1]=1;
    for(int k=2;k<=a;k++){
        count[k]=0;
        if(dig[k-1]>'0'){
            count[k]=count[k-1];
        }
        if(dig[k-2]=='1' || (dig[k-2]=='2' && dig[k-1]<'7'))
            count[k]+=count[k-2];
    }
    cout<<count[a];
    return 0;
}