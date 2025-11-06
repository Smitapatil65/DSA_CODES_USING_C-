#include<iostream>
#include<stack>
#include<math.h>
#include<vector>

using namespace std;

string decode(string s)
{
    string ans="";
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]==']')
      {
          while(st.size()>0 && st.top()!='[')
          {
              ans=st.top()+ans;
              st.pop();
          }
          if(st.size()!=0)
          {
              st.pop();
          }
          string n="";
          while(st.size()>0 && st.top()>='0' && st.top()<='9')
          {
              n=st.top()+n;
              st.pop();
          }
          int d=stoi(n);
          string tmp=ans;
          for(int i=0;i<d-1;i++)
          {
              ans+=tmp;
          }
          for(int i=0;i<ans.size();i++)
          {
              st.push(ans[i]);
          }
          ans="";
      }else{
       st.push(s[i]);
      }
    }
    while(st.size()>0)
    {
        ans=st.top()+ans;
        st.pop();
    }
    return ans;
}
int main()
{
    string s="3[a]2[bc]";
    cout<<"ans="<<decode(s);
    return 0;

}
