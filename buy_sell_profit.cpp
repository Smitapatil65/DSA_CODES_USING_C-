#include <iostream>
#include <vector>
using namespace std;
int profit(vector<int> &a)
{
    int n=a.size();
    int mp=0;
    int mini=a[0];
    int cost=0;
    for(int i=0;i<n;i++)
    {
        cost=a[i]-mini;
        mp=max(mp,cost);
        mini=min(mini,a[i]);
    }
    return mp;
}
int main()
{
    vector<int> a={1,5,1,5,6,9};
    cout<<"Profit="<<profit(a);
    return 0;

}










