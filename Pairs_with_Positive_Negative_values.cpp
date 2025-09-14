#include<iostream>
#include<map>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> pairs(vector<int>&a)
{
    map<int,int>mp;
    vector<int>v,ans;
    int n=a.size();

   for(int i=0;i<n;i++)
   {
       if(a[i]<0)
        v.push_back(a[i]);
       else
        mp[a[i]]++;
   }
   sort(v.begin(),v.end());

   for(int i=(int)v.size()-1;i>=0;i--)
   {
       int data=abs(v[i]);
       if(mp[data]>0)
        ans.push_back(v[i]);
        ans.push_back(data);
        mp[data]--;
   }
   return ans;
}
int main()
{

    vector<int> a={1, -3, 2, 3, 6, -1, -3, 3};
    vector<int>newans=pairs(a);
    for(auto i:newans)
        cout<<i;
    return 0;

}







