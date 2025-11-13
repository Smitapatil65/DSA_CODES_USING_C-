#include<iostream>
#include<stack>
#include<math.h>
#include<vector>

using namespace std;

bool check(string s)
{
  int n=s.size();
  stack<int>star,open;

  for(int i=0;i<n;i++)
  {
     if(s[i]=='(')
            open.push(i);
     else if(s[i]=='*')
            star.push(i);
     else
        if(!open.empty())
            open.pop();
        else if(!star.empty())
            star.pop();
        else
            return false;

  }
  while(!open.empty())
  {
      if(star.empty())
        return false;
      if(open.top() < star.top())
       {
        open.pop();
        star.pop();
       }
      else
        return false;

  }
   return true;
}
int main()
{
    cout<<"Ans"<<check("((*))");
    return 0;

}
