#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> threesum(vector<int>&a)
{
    int n=a.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++)
    {
        set<int> hashset;
        for(int j=i+1;j<n;j++)
        {
            int t=-(a[i]+a[j]);
            if(hashset.find(t)!=hashset.end())
            {
                vector<int> tmp={a[i],a[j],t};
                sort(tmp.begin(),tmp.end());
                st.insert(tmp);
            }
            hashset.insert(a[j]);
        }
    }
}
int main()
{
    vector<int> s={1,2,0,4};
    int k=3;
    vector<int>a=sum(s,k);
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}





