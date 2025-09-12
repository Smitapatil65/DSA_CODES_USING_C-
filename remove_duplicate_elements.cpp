#include<iostream>
#include<vector>

using namespace std;
int dup(vector<int> &a)
{
 int i=0;
 int n=a.size();
 for(int j=1;j<n;j++)
 {
  if(a[i]!=a[j])
  {
      a[i+1]=a[j];
      i=i+1;
  }
 }
 return i+1;
}
int main()
{
    vector<int> a={1,1,2,2,3};
    int n=dup(a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}











