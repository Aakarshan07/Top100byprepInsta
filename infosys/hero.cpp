#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,h;
    cin>>n>>m>>h;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];

    if(m*h>=sum)
    {
        cout<<"0";
    }
    else
    {
        int ans=0,j=0;;
        for(int i=n-1;i>=0;i--)
        {
            if(ans+a[i]<=m*h)
            {
                ans+=a[i];
                j++;
            }
        }
        cout<<n-j;
    }
}i