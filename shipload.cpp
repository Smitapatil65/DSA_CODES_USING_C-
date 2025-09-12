#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int fun(vector<int>&w,int c)
{
    int days=1,load=0;
    for(int i=0;i<w.size();i++)
    {
        if(load+w[i]>c)
        {
            days+=1;
            load=w[i];
        }else{
        load+=w[i];
        }
    }
    return days;
}
int ship(vector<int>&a,int c)
{
    int l=*max_element(a.begin(),a.end());
    int h=accumulate(a.begin(),a.end(),0);
    while(l<=h)
   {
    int m=(l+h)/2;
    int res=fun(a,m);
    if(res<=c)
    {
        h=m-1;
    }else{
        l=m+1;
    }
   }

    return l;
}
int main()
{
    vector<int> a={1,2,3,4,5,6,7,8,9,10};
    int d=5;
    cout<<"ans="<<ship(a,d);
    return 0;

}





