#include<bits/stdc++.h>
using namespace std;
int main(){
    int month,year;
    cout<<"enter month in digit:";
    cin>>month;
    cout<<"enter year in digit:";
    cin>>year;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"number of days are:31";
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"number of days are:30";
        break;

        case 2:
        if((year%400==0) || (year%100!=0) && (year%4==0)){
            cout<<"number of days are:29";
        }
        else cout<<"number of days are:28";
        break;
    }
    return 0;
}