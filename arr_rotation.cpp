#include <iostream>
#include <vector>
using namespace std;

int ar(vector<int> &a)
{
    int n=a.size();
    int l=0,h=n-1;
    int ans=INT_MAX;
    int i=-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[l]<=a[h])
        {  if(a[l]<ans)
           {
           i=l;
           ans=a[l];
           }
           break;
        }
       if(a[l]<=a[m])
       {
           if(a[l]<ans)
           {
               i=l;
               ans=a[l];
           }
           l=m+1;
       }else{
        h=m-1;
        if(a[m]<ans)
        {
            i=m;
            ans=a[m];
        }
       }
    }
    return i;

}
int main()
{
    vector<int>s={5 ,1, 2, 3 ,4};
    cout<<"ans="<<ar(s);
    return 0;
}





