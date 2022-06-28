#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[20];
    char *single[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *twodig[]={"","ten","eleven","tweleve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    cout<<"enter a number:";
    cin>>a;
    int len=strlen(a);
    int num;
    if(len==1){
        num=a[0]-48;
        cout<<single[num];
    }
    if(len==2 && a[0]==49){
        num=(a[0]-48)+(a[1]-48);
        cout<<twodig[num];
    }
    else if(len==2 && a[1]==48){
        num=(a[0]-48)+(a[1]-48);
        cout<<tens[num];
    }
    else if(len==2){
        num=a[0]-48;
        cout<<tens[num];
        num=a[1]-48;
        cout<<single[num];
    }
    if(len==3 && a[1]==49){
        num=a[0]-48;
        cout<<single[num]<<" hundered ";
        num=(a[1]-48)+(a[2]-48);
        cout<<twodig[num];
    }
    else if(len==3 && a[2]==48){
        num=a[0]-48;
        cout<<single[num]<<" hundered ";
        num=(a[1]-48)+(a[2]-48);
        cout<<tens[num];
    }
    else if(len==3){
        cout<<single[num]<<" hundered ";
    }
    if(len==4 && a[2]==49){
        num=a[0]-48;
        cout<<single[num]<<" thousand ";
        num=a[1]-48;
        cout<<single[num]<<" hundered ";
        num=(a[2]-48)+(a[3]-48);
        cout<<twodig[num];
    }
    else if(len==4 && a[2]==48){
        num=a[0]-48;
        cout<<single[num]<<" thousand ";
        num=a[1]-48;
        cout<<single[num]<<" hundered ";
        num=(a[2]-48)+(a[3]-48);
        cout<<tens[num];
    }
    else if(len==4){
        cout<<single[num]<<" thousand ";
    }
    if(len>4){
        cout<<"beyond capability";
    }
    return 0;
}