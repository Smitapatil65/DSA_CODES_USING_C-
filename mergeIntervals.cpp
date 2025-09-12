#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<vector<int>> int merg(vector<vector<int> &inter)
{
    sort(inter.begin(),inter.end());
    vector<vector<int>>ans;
    for(int i=0;i<inter.size();i++)
    {
        if(ans.empty())
        {
            ans.push_back(inter[i]);
        }else{
            vector<int>&v=ans.back();
            int y=v[1];
            if(inter[i][0]<=v[1])
            {
                v[1]=max(inter[i][1],y);
            }else{
            ans.push_back(inter[i]);
            }
        }
    }
    return ans;
}








