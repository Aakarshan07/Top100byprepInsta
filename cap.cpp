#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(i==0 || i==strlen(str)-1){
            str[i]=toupper(str[i]);
        }
        else if(str[i]==' '){
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
    cout<<str;
    return 0;
}