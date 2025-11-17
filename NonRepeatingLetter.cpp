#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>

using namespace std;

int check(string s)
{
    int n=s.size();
    queue<int>Q;
    unordered_map<char,int>mp;

    for(int i=0;i<n;i++)
    {
        if(mp.find(s[i])==mp.end())
        {
            Q.push(i);
        }
        mp[s[i]] ++;
        while(Q.size()>0 && mp[s[Q.front()]]>1)
        {
            Q.pop();
        }
    }
    return Q.empty()?-1:Q.front();
}
int main()
{
    cout<<"Ans="<<check("loveleetcode");
    return 0;
}
















