#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            cout<<str[i];
        }
    }
    return 0;
}