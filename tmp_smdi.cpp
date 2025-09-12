#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int fun(vector<int> &arr,int div)
{
    int n=arr.size();
    int sum=0;
    for(int i=0;i<=n;i++)
    {
          sum+=ceil(1.0*arr[i]/div);

    }
    return sum;
}
int sd(vector<int> &arr,int the)
{
  int l=1,h=*max_element(arr.begin(),arr.end());
  int mid=(l+h)/2;
  if(fun(arr,mid)<=th)
  {
     h=mid-1;
  }else{
     l=mid+1;
  }
   return l;
}
int main()
{
    vector<int> arr={44,22,33,11,1};
    int the=5;
    cout<<"ans="<<small(arr,the);

}
