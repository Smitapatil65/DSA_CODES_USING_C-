#include <iostream>
#include <vector>
using namespace std;
vector<int> sub(vector<int> &a)
{
    int n=a.size();
    int ni=1,pi=0;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++)
    {

        if(a[i]<0)
        {
            ans[ni]=a[i];
            ni+=2;
        }else{
            ans[pi]=a[i];
            pi+=2;
        }
    }
    return ans;

}
int main()
{
    vector<int> a={-3,-2,2,-5,6,6,-7,9};
    vector<int>ans=sub(a);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;

}







