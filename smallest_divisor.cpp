#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int sf(vector<int>&a,int m)
{   int r=0;
    for(int i=0;i<a.size();i++)
    {
        r+=ceil(1.0*a[i]/m);
    }
    return r;
}
int mf(vector<int>&a,int th)
{   int ans=0;
    int n=a.size();
    int l=1,h=*max_element(a.begin(),a.end());
    while(l<=h)
    {
        int m=(l+h)/2;

        if(sf(a,m)<=th)
        {

            h=m-1;
        }else{
            l=m+1;
        }
    }
    return l;
}


int main() {
    vector<int> arr = {1,2,5,9};
    int k = 6;
    cout << "Ans = " << mf(arr, k) << endl;
    return 0;
}
