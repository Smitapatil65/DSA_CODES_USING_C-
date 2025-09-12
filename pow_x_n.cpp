#include<iostream>
using namespace std;
double power(double x,int n)
{  if(n==0) return 1.0;
   if(x==1) return 1.0;
   if(x==0) return 0;
   if(x== -1 && n%2==0)
   { return 1.0;}
   if(x==-1  && n%2!=0) return -1.0;
   long binaryform=n;
   double ans=1;
   if(n<0)
   {
     x=1/x;
     binaryform=-binaryform;
   }
   while(binaryform>0)
   {
       if(binaryform%2==1)
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








