#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int sub(vector<int>&a,int k)
{   int n=a.size();

    int l=0;
    unordered_map<int,int> m;
    int sum=0;
    m[0]=-1;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(m.find(sum-k)!=m.end())
        {
            l=max(l,i-m[sum-k]);
        }
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
        }

    }
    return l;
}
int main()
{
    vector<int> a={1,2,3,5,5,6};
    int k=10;
    cout<<"ans="<<sub(a,k);
    return 0;


}














