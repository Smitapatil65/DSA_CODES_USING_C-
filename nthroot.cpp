#include <iostream>
#include <vector>
using namespace std;
int f1(int mid,int n,int m)
{
    long long ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*mid;
        if(ans>m) return 2;
    }
    if(ans==m) return 1;
    return 0;

}
int f2(int n,int m)
{
    int l=1,h=m;

    while(l<=h)
    {
        int mid=(l+h)/2;
        int midn=f1(mid,n,m);
        if(midn==1)
        {
            return mid;
        }
        else if(midn==0)l=mid+1;
        else h=mid-1;
    }
    return -1;
}
int main() {
    int n = 3; // Find cube root
    int m = 27;
    int root = f2(n, m);
    if(root != -1)
        cout << "The " << n << "th root of " << m << " is " << root << endl;
    else
        cout << "No integer root found." << endl;
}

