#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;


vector<int> sa(vector<int>&arr)
{
    int n=arr.size();
    int s=arr[0];
    for(int i=0;i<n-1;i++)
    {
        bool sw=false;
        for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          {
              swap(arr[j],arr[j+1]);
              sw=true;
          }
        }
        if(!sw)
            break;

    }
    return  arr;
}
int main()
{
   vector<int> arr={1,7,2,9,1};
   vector<int> ans=sa(arr);
   for(int i:ans)
   {
       cout<<i<<" ";
   }
    return 0;
}






