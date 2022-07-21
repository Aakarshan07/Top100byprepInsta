#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str1,str2;
    getline(cin,str);
    getline(cin,str1);
    getline(cin,str2); 
    cout<<str.replace(str.find(str1),str1.length(),str2);
    return 0;
}