#include <iostream>
#include <vector>
using namespace std;

 int countFreq1(vector<int>& arr, int target) {
      int n=arr.size();
      int ans=-1;
      int l=0,h=n-1;
      int c=0;
      while(l<=h)
      {
          int mid=(l+h)/2;
          if(arr[mid]>=target)
          {
              ans=mid;
              h=mid-1;
          }else
          {
              l=mid+1;
          }
      }

      return ans;
    }

      int countFreq2(vector<int>& arr, int target)
      {
      int n=arr.size();
      int l=0,h=n-1;
      int ans=-1;
      int c=0;
      while(l<=h)
      {
          int mid=(l+h)/2;
          if(arr[mid]>target)
          {
              ans=mid;
              h=mid-1;
          }else
          {
              l=mid+1;
          }
      }

      return ans;
    }
    int countOccurences(vector<int>&arr,int target)
    {
        int f=countFreq1(arr,target);
        int l=countFreq2(arr,target);
        if(f==-1) return 0;
        return (l-f);
    }

int main()
{
    vector<int> a={1,1,2,2,2,2,3};
    int t=1;
    cout<<"countOccurences"<<countOccurences(a,t);

    return 0;
}


