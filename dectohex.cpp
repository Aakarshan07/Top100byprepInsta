#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem,i=0;
    char ans[100];
        while(num){
            rem=num%16;
            if(rem<10){
                ans[i]=rem+48;
            }
            else{
                switch(rem){
                    case 10:ans[i]='A'; break; 
                    case 11:ans[i]='B'; break;
                    case 12:ans[i]='C';break;
                    case 13:ans[i]='D';break;
                    case 14:ans[i]='E';break;
                    case 15:ans[i]='F';break;
                }      
            }
            num/=16;
            i+=1;
    }
    cout<<"hexadecimal number is ";
    for(int j=i-1;j>=0;j--){
        cout<<ans[j];
    }
    return 0;
}