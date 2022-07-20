#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    regex r("[aeiouAEIOU]");
    cout<<regex_replace(str,r,"");
    return 0;
}