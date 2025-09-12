#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int fun(int divident,int divisor)
{   bool sign=true;
    if(divident==divisor)return 1;
    if(divident>=0 && divisor<0)sign=false;
    else if(divident<=0 && divisor>0)sign=false;
    long n=abs(divident);
    long d=abs(divisor);
    int qu=0;
    while(n>=d)
    {
        int c=0;
        while(n>=(d<<(c+1)))
        {
            c+=1;
        }
        qu+=(1<<c);
        n-=(d<<c);
    }
    if(qu==(1<<31 && sign))
        return INT_MAX;
    if(qu==(1<<31 && !sign))
        return INT_MIN;

    return sign?qu:-qu;
}
int main()
{
    int n=40,d=6;
    cout<<"ans="<<fun(n,d);
    return 0;
}
