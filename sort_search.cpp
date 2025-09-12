#include <iostream>
#include <vector>
using namespace std;

bool rs(vector<int> &a,int t)
{
    int n=a.size();
    int l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]==t) return m;
        if(a[l]==a[m] && a[m]==a[h])
        {
            l++;
            h--;
            continue;
        }
        if(a[l]<=a[m])
        {
           if(a[l]<=t && t<a[m])
           {
               h=m-1;
           }else{
               l=m+1;
           }
        }else{
          if(a[m]<t && t<=a[h])
          {
              l=m+1;
          }else{
              h=m-1;
          }
        }
    }
    return false;

}
int main()
{
    vector<int>a={1,5,6,0,0,1,1};
    int t=1;
    cout<<"ans="<<rs(a,t);
    return 0;
}







