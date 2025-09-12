#include<iostream>
#include<vector>
using namespace std;
int decode(string s)
{
    int n=s.size();
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=s[0]==0?'0':1;
    for(int i=2;i<=n;i++)
    {
        int od=stoi(s.substr(i-1,1));
        int td=stoi(s.substr(i-2,2));
        if(od>=1)
        {
            dp[i]+=dp[i-1];
        }
        if(td>=10 && td<=26)
        {
            dp[i]+=dp[i-2];
        }
    }
    return dp[n];
}
int main()
{
    string s="01025";
    cout<<"ans="<<decode(s);
}











