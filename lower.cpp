#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int lo(vector<int>&a,int k)
{
    int n=a.size();

    int ans=0;
    int res=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<k)
        {
           ans=a[i];
           res=max(ans,res);
           index=i;
        }
    }
    cout<<"index="<<index<<endl;
    return res;

}
int main()
{
    vector<int> a={1,2,8,10,10,12,19};
    int k=11;
    cout<<lo(a,k);
    return 0;
}
