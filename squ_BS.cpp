#include <iostream>
#include <vector>
using namespace std;
int sq(int &a)
{
    int l=0,h=a;
    long ans=0;
    while(l<=h)
    {
        int m=(l+h)/2;
        long c=m*m;
        if(c<=a)
        {
            ans=m;
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return ans;

}
int main()
{
   int a=18;
   cout<<"Sq="<<sq(a);
   return 0;

}
