#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"in first quadrant";
        return 0;
    }
    else if(x<0 && y>0){
        cout<<"in second quadrant";
        return 0;
    }
    else if(x<0 && y<0){
        cout<<"in third quadrant";
        return 0;
    }
    else if(x>0 && y<0){
        cout<<"in forth quadrant";
        return 0;
    }
    else if(x==0 && y==0){
        cout<<"on origin";
        return 0;
    }
    else if(x!=0 && y==0){
        cout<<"on x axis";
        return 0;
    }
    else if(x==0 && y!=0){
        cout<<"on y axis";
        return 0;
    }
    return 1;
}