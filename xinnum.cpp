#include<bits/stdc++.h>
using namespace std;
int main(){
    long int num;
    cout<<"enter number:";
    cin>>num;
    int n1;
    cout<<"enter digit to count:";
    cin>>n1;
    int count=0;
    while(num){
        int x=num%10;
        if(n1==x){
            count++;
        }
        num/=10;
    }
    cout<<"total occurance is:"<<count;
    return 0;
}