#include <iostream>
#include <vector>
using namespace std;

int floor(vector<int> &a,int x)
{
    int n=a.size();
    int l=0,h=n-1;
    int ans=-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]<=x)
        {
            ans=a[m];
            l=m+1;
        }else{
         h=m-1;
        }
    }
    return ans;
}
int ceil(vector<int> &a,int x)
{
    int n=a.size();
    int l=0,h=n-1;
    int ans=-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]>=x)
        {
            ans=a[m];
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
    cout<<"floor="<<floor(a,x);
    cout<<"Ceil="<<ceil(a,x);
    return 0;
}












