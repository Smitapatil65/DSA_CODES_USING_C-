#include<iostream>
#include<vector>
using namespace std;
int lb(vector<int> arr,int n,int x )
{

    int l=0,h=n-1;
    int ans=n;
    while(l<=h)
    {
        int mid=(l+h)/2;

        if(arr[mid]>=x)
        {
            ans=mid;
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr={1,2,3,5};
    int n=arr.size();
    int x=3;
    cout<<"ans="<<lb(arr,n,x);
    return 0;

}
