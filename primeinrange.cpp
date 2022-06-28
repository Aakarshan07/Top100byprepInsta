#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter number n1 and n2: ";
    cin>>n1>>n2;
    while(n1<=n2){
        int flag=0;
        for(int i=2;i<=n1/2;i++){
            if(n1%i==0){
                flag++;
            }
        }
        if(!flag)
            cout<<n1<<" it is a prime number"<<endl;
        n1+=1;
    }
    return 0;
}