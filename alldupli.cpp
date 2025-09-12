#include <iostream>
#include <vector>
using namespace std;

void sum(vector<int>&a)
{
    int n=a.size();


    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
     {
       if(a[i]==a[j])
       {
          cout<<a[i]<<" ";
       }
     }
    }

}
int main()
{
    vector<int> a={2,1,3,1,2};
    sum(a);
    return 0;
}
