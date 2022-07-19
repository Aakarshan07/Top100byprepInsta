#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<str.length()<<" is same as "<<count;
}