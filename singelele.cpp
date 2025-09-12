#include <iostream>
#include <vector>

using namespace std;
int se(vector<int> &a)
{
    int n=a.size();
    if(n==1) return a[0];
    if(a[0]!=a[1])return a[0];
    if(a[n-1]!=a[n-2]) return a[n-1];
    int l=1,h=n-2;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]!=a[m+1] && a[m]!=a[m-1])
        {
            return a[m];
        }
        if((m%2==1 && a[m]==a[m-1])||(m%2==0 && a[m]==a[m+1]))
        {
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> s={1,1,0,2,2};
    cout<<se(s);
    return 0;
}





