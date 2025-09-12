#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int one(vector<int>&a)
{
    int xorr=0;
    for(int i=0;i<a.size();i++)
    {
        xorr=xorr^(a[i]);
    }
    return xorr;
}
int main()
{
    vector<int>a={1,2,2,33,33,4,1};
    cout<<"single element="<<one(a);
    return 0;
}
