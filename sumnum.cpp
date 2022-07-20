#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cin>>str;
    int sum=0;
    for(int i=0;str[i]!='\0';i++){
        if(isdigit(str[i])){
            sum+=str[i]-'0';
        }
    }
    cout<<sum;
    return 0;
}