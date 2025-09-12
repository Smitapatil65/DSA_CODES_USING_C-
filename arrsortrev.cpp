#include<iostream>
#include<vector>
using namespace std;
int fun(vector<int> &a)
{
    int n=a.size();
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(a[i]!=a[j])
        {
            a[i+1]=a[j];
            i++;
        }

    }
    return i+1;
}
int main()
{
    vector<int> v={1,1,2,2,2,3,3};
     int n=fun(v);
     for(int i=0;i<n;i++)
     {
         cout<<v[i];
     }
   return 0;
}
