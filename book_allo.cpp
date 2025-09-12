#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int countstu(vector<int> &arr, int pages)
   {
    int student=1;
    long long pagesstu=0;
    for(int i=0;i<arr.size();i++)
    {
        if(pagesstu+arr[i]<=pages)
        {
             pagesstu+=arr[i];
        }else{
             student++;
             pagesstu=arr[i];
        }
    }
    return student;
}

    int findPages(vector<int> &arr, int m)
      {
        int n=arr.size();
        if(m > n) return -1;
        int l=*max_element(arr.begin(),arr.end());
        int h=accumulate(arr.begin(),arr.end(),0);
        while(l<=h)
        {
            int mid=(l+h)/2;
            int stu=countstu(arr,mid);
            if(stu > m){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return l;
    }

int main()
{
     vector<int> nums = {12, 34, 67, 90};
     int k=2;
     cout<<"ans="<<findPages(nums,k);
     return 0;
}
