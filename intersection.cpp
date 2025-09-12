#include <iostream>
#include <vector>
using namespace std;

vector<int> sum(vector<int>&a,vector<int>&b)
{
    int n=a.size();
    int m=b.size();
    vector<int> s;
    for(int i=0;i<n;i++)
    {
      int ele=a[i];
      for(int j=0;j<m;j++)
     {
       if(ele == b[j])
       {
          s.push_back(ele);
          b[j]=-1215;
          break;
       }
     }

    }
   return s;
}
int main()
{
    vector<int> a={1,4,4,5,6};
    vector<int> b={2,4,5,6};
    vector<int> c=sum(a,b);
    for(auto i:c)
    {
        cout<<i<<" ";
    }
    return 0;
}
