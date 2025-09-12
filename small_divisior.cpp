#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int sd(vector<int> &arr,int div)
{ int sum=0;
  int n=arr.size();
  for(int i=0;i<n;i++)
  {
     sum+=ceil(1.0*arr[i]/div);
  }
  return sum;
}
int small(vector<int>&arr,int th)
{
    int l = 1, h = (arr.empty() ? 1 : *max_element(arr.begin(), arr.end()));
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(sd(arr,mid)<=th)
        {
         h=mid-1;
        }else{
         l=mid+1;
        }
    }
    return l;
}
int main()
{
    vector<int> arr={44,22,33,11,1};
    int the=5;
    cout<<"ans="<<small(arr,the);

}













