#include<iostream>
#include<vector>
using namespace std;
int sub(vector<int> &a)
{
    int n =a.size();
    int sum=0;
    int m=0;
    int s,as,ae;
    for(int i=0;i<n;i++)
    {
        if(sum==0) s=i;
        sum+=a[i];
        if(sum>m)
        {   m=sum;
            as=s,ae=i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return m;
}
int main()
{
    vector<int> a={1,-1,2,4,-2,-1};
    cout<<"ans="<<sub(a);
    return 0;

}
