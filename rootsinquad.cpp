#include<bits/stdc++.h>
using namespace std;
void typed(int d,int a,int b,int c){
    float root1=0,root2=0;
    if(d>0){
        cout<<"real and different roots"<<endl;
        root1=-b+sqrt(d)/2*a;
        root2=-b-sqrt(d)/2*a;
    }
    else if(d<0){
        cout<<"imaginary roots"<<endl;
        root1=-b/(2*a);
        root2=sqrt(-d)/(2*a);
    }
    else if(d==0){ 
        cout<<"real and equal roots"<<endl;
        root1=root2=(-b+sqrt(d))/(2*a);
    }
    cout<<"roots are:"<<root1<<" , "<<root2;
}
int main(){
    int a,b,c,d=0;
    cout<<"enter value of a,b,c"<<endl;
    cin>>a>>b>>c;
    d=pow(b,2)-(4*a*c);
    typed(d,a,b,c);
    return 0;
}