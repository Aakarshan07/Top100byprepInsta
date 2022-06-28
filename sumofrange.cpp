#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int n1,n2;
    cout<<"enter value of range:";
    cin>>n1>>n2;
    int sum=0;
    for(int i=n1;i<=n2;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
*/

//using recursion
int sumofrange(int n1,int n2){
    int sum=0;
    if(n1<=n2){
        return n1+sumofrange(n1+1,n2); // we can use sum=n1+sumofrange(n2); only but it will create a warning of non void function getting no return 
    }
    else return sum;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<sumofrange(n1,n2);
    return 0;
}

// using formula sum=y*(y+1)/2 - x*(x-1)/2;

