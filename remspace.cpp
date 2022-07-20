#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    for (int i = 0; str[i]; i++)
    if (str[i] != ' ')
    str[count++] = str[i]; 
    
    str[count] = '\0';
    cout<<str;
    return 0;
}