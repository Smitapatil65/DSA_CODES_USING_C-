#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int> dutch_national_flag(vector<int>&a)
{
    int n=a.size();
    int l=0,h=n-1,m=0;
    while(m<=h)
    {
       if(a[m]==0)
       {
           swap(a[l],a[m]);
           l++;
           m++;
       }
       else if(a[m]==1)
       {
           m++;
       }
       else{
        swap(a[m],a[h]);
        h--;
       }
    }
    return a;
}
int main()
{
    vector<int> a={0,1,2,2,0,2,1,0};
    dutch_national_flag(a);
    for(auto i:a)
    {
        cout<<i<<"";
    }
    return 0;
}















