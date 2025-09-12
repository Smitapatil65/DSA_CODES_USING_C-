#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sub(vector<int>&a)
{
    int n=a.size();
    vector<int>ans;
    int m=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>m)
        {
            ans.push_back(a[i]);
        }
        m=max(m,a[i]);
    }
   sort(ans.begin(),ans.end());
   return ans;

}
int main()
{
    vector<int> a={16, 17, 4, 3, 5, 2};
    vector<int> b=sub(a);
    for(auto i:b)
    {
        cout<<i<<" ";
    }

    return 0;
}








