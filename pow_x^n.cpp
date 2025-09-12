#include<iostream>
using namespace std;
double power(double x,int n)
{  if(n==1) return x;
   if(x==1) return 1;
   if(x==0) return 1;
   if(x==-1 && x%2==0) return 1;
   if(x==1  && x%2!=0) return -1;
   int binaryform=n;
   double ans=0;
   if(n<0)
   {
     x=1/x;
     binaryform=-binaryform;
   }
   while(binaryform>0)
   {
       if(binaryform%2==0)
       {
           ans*=x;
       }
       x*=x;
       binaryform/=2;
   }
    return ans;
}
int main()
{   double x;
    int n;
    cout<<"Enter num:"<<endl;
    cin>>x;
    cout<<"raise to power:"<<endl;
    cin>>n;
    cout<<"Ans="<<power(x,n);
    return 0;
}








