#include <iostream>
#include <vector>
using namespace std;

int in(vector<int> &a,int t)
{
    int n=a.size();
    int l=0,h=n-1;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int m=(l+h)/2;
        if(a[m]>=t)
        {
            ans=m;
            h=m-1;
        }else{
         l=m+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> a={3 ,4, 4 ,7, 8, 10};
    int x=2;
    cout<<"ans="<<in(a,x);
    return 0;
}



