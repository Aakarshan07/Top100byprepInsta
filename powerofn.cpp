#include<bits/stdc++.h>
using namespace std;
double power(int x,int y){
    double result=1;
    if(x==1){
        return 1;
    }
    else{
        while(y>0){
            if(y&1==1){
                result=result*x;
            }
            x=x*x;
            y=y>>1;
            cout<<x<<" "<<y<<endl;
        }
    }
    return result;
}
int main(){
    int x,y;
    cout<<"enter digit:";
    cin>>x;
    cout<<"power:";
    cin>>y;
    cout<<power(x,y);
    return 0;
}