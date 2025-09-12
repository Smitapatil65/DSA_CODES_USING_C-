#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool fun1(string s,string b)
{
    int n=s.size();
    int fn=s[0];
    int index=-1;
    vector<int> tmp(n);
    for(int i=0;i<b.size();i++)
    {
        if(s[0]==b[i])
        {
           index=i;
        }
    }
    for(int i=0;i<n;i++)
    {
      tmp[index]=s[i];
        index++;
       if(index > n)
        break;
    }
    for(int i=0;i<index;i++)
    {
      tmp[i]=s[index-index];
        index++;
       if(index > n)
        break;
    }
    for(int i=0;i<n;i++)
    {
      if(tmp[i]==s[i])
    {
        return true
    }
    }

    return false
}
int main()
{
    string s=abcde,b=deabc;
    cout<<fun1(s,b);
    return 0;

}









