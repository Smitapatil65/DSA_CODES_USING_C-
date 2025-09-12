#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> sum(vector<int>&a,int k)
{
  int n=a.size();
  for(int i=0;i<n;i++)
  {
      int n=a[i];
      int r=k-n;
      if(v.find(r)!=v.end())
      {
          return {v[r],i};
      }
      v[n]=i;
  }
  return {-1,-1};
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








