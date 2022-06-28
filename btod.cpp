#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0;
    long int n;
    float sum=0.0;
    cin>>n;
    if(n==0){
        cout<<"decimal number is:1";
        return 0;
    }
    while(n!=0){
        sum+=(n%10)*pow(2,j);
        j+=1;
        n/=10;
    }
    cout<<"decimal number is:"<<sum;
    string binno;
    cin>>binno;
    cout<<stoi(binno,0,2);
    return 0;
}
