#include<iostream>
#include<vector>
#include<map>
using namespace std;

int atoi(string str)
{ int s=0;
  if(str[0]=='-')
  {
      s=1;
  }
  int ans=0;
  for(int i=s;i<str.size();i++)
  {
      if(str[i]>='0' and str[i]<='9')
      {
          int d=str[i]-'0';
          ans=ans*10+d;
      }else{
       return -1;
      }

  }
  if(str[0]=='-')
   return -ans;
  else
  return ans;
}
int main()
{
   string s="   -8";
   cout<<"ans="<<atoi(s);
   return 0;
}
