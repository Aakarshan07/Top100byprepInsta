#include <bits/stdc++.h>
using namespace std;
bool check(string &s, int l, int r) 
{
    while (l < r) 
    {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}
    
void dfs(vector<vector<string>> &r, string &s, int start, vector<string> &c) 
{
    if(start >= s.length())
    {
        r.push_back(c);
    }
    for(int i = start;i < s.length(); i++) 
    {
        if(check(s, start, i)) 
        {
            c.push_back(s.substr(start, i - start + 1));
            dfs(r, s, i + 1, c);
            c.pop_back();
        }
    }
}
int main()
{
   string s;
   cin>>s;
   vector<vector<string>> result;
   vector<string> current;
   dfs(result, s, 0, current);
   for(int i=0;i<result.size();i++)
   {
       for(int j=0;j<result[i].size();j++)
       {
           cout<<result[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}
