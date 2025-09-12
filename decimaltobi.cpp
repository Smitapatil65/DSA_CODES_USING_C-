#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
string debi(int n)
{
    if(n==0) return 0;
    string res="";
    while(n>0)
    {
        if ((n%2)==1) res+='1';
            else res+='0';
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;

}
 string one(string bi)
 {
     string res="";
     int n=bi.size();
     for(char c:bi)
     {
         if(c=='0')
            res+='1';
         else
            res+='0';

     }
     return res;
 }

int bide(string n)
{
  int res=0;
  int l=n.size();
  reverse(n.begin(),n.end());

  for(int i=0;i<l;i++)
  {
      if (n[i]=='1')
        res+=pow(2,i);
  }
  return res;
}


int main()
{
    int n=0;
    string gi="";
   // cout<<"res="<<debi(n);
   // cout<<"res="<<bide("1011");

    cout<<"enter num";
    cin>>n;
    gi=debi(n);
    cout<<"ones complement="<<one(gi);
    return 0;

}



