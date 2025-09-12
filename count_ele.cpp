#include<iostream>
using namespace std;
int main()
{

    int a[100],f[100];
    int i,j,c,n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter element in array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        f[i]==1;
    }
     for(int i=0;i<n;i++)
    {
        c=1;
      for(int j=i+1;j<n;j++)
      {
       if(a[i]==a[j])
       {
           c++;
           f[j]=0;
       }
      }
      if(f[i]!=0)
      {
          f[i]=c;
      }
    }
    cout<<"frequency"<<endl;
    for(i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
            cout<<a[i]<<"occurs"<<f[i]<<"times\n";
        }

    }
}
