#include<iostream>
using namespace std;
void rot(int a[],int n ,int k)
{
    k=k%n;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
          cout<<a[n+i-k]<<" ";
        }
        else
        {
         cout<<(a[i-k])<<" ";
        }
    }
    cout<<"\n";
}
int main()
{   int n,k;
    int a[]={1,2,3,4,5};
    cout<<"Enter rotation time"<<endl;
    cin>>k;
    n=sizeof(a)/sizeof(a[0]);
    rot(a,n,k);
}


