#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[]={1,2,3,4,5};
    int maxsum=INT_MIN;//In a 32-bit system, INT_MIN = -2,147,483,648.INT_MIN is a constant defined in the <climits> header in C++.
//It represents the minimum possible integer value for the int data type.
    for(int st=0;st<n;st++)
    {   int cursum=0;
        for(int end=st;end<n;end++)
        {
           cursum+=a[end];
           maxsum=max(cursum,maxsum);
        }
    }
    cout<<" max subarray sum:"<<maxsum<<endl;
    return 0;
}
