#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1;
    str2=str1;
    reverse(str1.begin(),str1.end());
    if(str2==str1){
        cout<<"yes";
    }
    else cout<<"No";
    return 0;
}
