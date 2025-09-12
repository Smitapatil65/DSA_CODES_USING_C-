#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include <algorithm>
using namespace std;
int fun2(vector<int>&a,int ha)
{   int fa=0;
    for(int i=0;i<a.size();i++)
    {
         fa+=ceil((double)a[i]/ha);
    }
    return fa;
}
int fun1 (vector<int>&a,int ha)
{
    int l=1,h=*max_element(a.begin(),a.end());
    int ans=h;

    while(l<=h)
    {
        int mid=(l+h)/2;
        int tn=fun2(a,mid);
        if(tn<=ha)
        {
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    return ans;
}

int main()
{
    vector<int> a={3,6,7,11};
    int h=8;
    cout<<"Ans="<<fun1(a,h);
    return 0;
}
