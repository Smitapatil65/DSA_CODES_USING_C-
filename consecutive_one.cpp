#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int fi(vector<int> &a,int k)
{
    int n=a.size();
    unordered_map<int,int> m;
    int l=0;
    int sum=0;
    m[0]=-1;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(m.find(sum-k)!= m.end())
        {
            l=max(l,i-m[sum-k]);
        }
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
        }
    }
    return l;
}
int main()
{
    vector<int> a={1,1,0,2,1,1,0,1,1,1};
    int k=5;
    int l=fi(a,k);
   for(int i=0;i<l;i++)
   {
       cout<<a[i]<<"";
   }
   cout<<l;
    return 0;
}
