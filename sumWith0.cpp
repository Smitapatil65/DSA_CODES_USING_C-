#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

bool sum(vector<int>&a,int &target)
{
    int n=a.size();
    unordered_map<int,int>mp;

    for(auto l:a)
    {
        mp[l]++;
    }

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        int key=i->first;
        int val=i->second;

        int pair=target-key;

        if(key==pair)
        {
            if(val>1)
                return true;
        }else{
          if(mp.find(pair)!=mp.end())
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int>a={4, 2, -3, 1, 6};
    int t=11;
    if(sum(a,t))
        cout<<"True";
    else
        cout<<"False";

   return true;



}














