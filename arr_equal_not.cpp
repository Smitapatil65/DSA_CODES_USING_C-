//check 2 array are equal or not..
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool fun(int a[],int b[],int n,int m)
{
    if(n!=m)
        return false;
    sort(a,a+n);//a is a starting of array a and a+n pointer to position after last element of array
    sort(b,b+m);//sort is a part of standard template library -(start,end)
    for(int i=0;i<n;i++)
    {
        if(a[i] != b[i])
            return false;
    }
    return true;
}
int main()
{
    int a[]={2,3,8,8};
    int b[]={2,3,8,8};
    int n=sizeof(a)/sizeof(int);
    int m=sizeof(b)/sizeof(int);
    if(fun(a,b,n,m))
        cout<<"Equal";
    else
        cout<<"not equal";
    return 0;

}
