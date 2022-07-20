#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str2;
    int i=0,j=0;
    while(str[i]!='\0'){
        if(str[i]!='(' || str[i]!=')'){
            str2[j++]=str[i];
        }
        i++;
        str2[j]='\0';
    }
    cout<<"answer:"<<str2;
    return 0;
}