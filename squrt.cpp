#include<iostream>
#include<vector>
using namespace std;
int sqr(int x)
{
    int l=1,h=x;
    while(l<=h)
    {
        int mid=(l+h)/2;
        long val=mid*mid;
        if(val<=x)
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return h;
}
int main()
{
    int x=5;
    cout<<"Ans="<<sqr(x);

}



