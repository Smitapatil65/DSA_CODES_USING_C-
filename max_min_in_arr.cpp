#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getmin(int arr[],int n)
{   int min=arr[0];
     for(int i=1;i<n;i++)
    {
      if(min>arr[i])
      {
          min=arr[i];
      }
    }
    return min;
}

int getmax(int arr[],int n)
{
     int max=arr[0];
     for(int i=1;i<n;i++)
    {
      if(max<arr[i])
      {
          max=arr[i];
      }
    }
    return max;
}
int main()
{
  int n;
  cout<<"enter the size of array";
  cin>>n;
  int arr[n];
  cout<<"enter array element";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
   cout<<"min="<<getmin(arr,n)<<endl;
   cout<<"max="<<getmax(arr,n)<<endl;

   return 0;

}
