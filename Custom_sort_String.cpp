#include<iostream>
#include<climits>
#include<map>
#include<vector>

using namespace std;

string custom(string &order,string &s)
{
    map<char,int>mp;
    string ans="";
       for(auto i:s)
    {
        mp[i]++;
    }

    for(auto i:order)
    {
        if(mp.find(i)!=mp.end())
           {
            auto tmp=mp.find(i);
            int c=tmp->second;
            string s(c,i);
            ans+=s;
            mp.erase(i);
           }
    }
    for(auto i:mp)
    {
        string s(i.second,i.first);
        ans+=s;
    }
    return ans;
}

int main()
{
    string order="cba";
    string s="abcd";
    cout<<"ans="<<custom(order,s);
    return 0;
}






