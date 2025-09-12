#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find(vector<int>&a,int k)
{
    int n=a.size();
    int l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        int miss=a[m]-(m+1);
        if(miss<k)
        {
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return k+h+1;
}
int main()
{
   vector<int> a={2,3,4,7,11};
    int k=5;
    cout<<"ans="<<find(a,k);
    return 0;

}





















