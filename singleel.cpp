#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int>&a)
{

  int n=a.size();
  int ans=0;
  for(int i=0;i<n;i++)
  {
      ans=ans^a[i];
  }
  return ans;
}
int main()
{
   vector<int> s={1,1,2,2,51,3,3};
   cout<<sum(s);

   return 0;
}








