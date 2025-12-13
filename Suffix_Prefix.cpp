#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

bool ipp(const string& s1,const string& s2)
{
    int m=s1.size();
    int n=s2.size();
    if(m>n)
        return false;

    for(int i=0;s1[i]!='\0';i++)
        if(s1[i] != s2[i])
        return false;
    return true;
}

bool isu(const string &s1,const string &s2)
{
    int m=s1.size();
    int n=s2.size();
    if(m>n)
        return false;

    for(int i=m-1;i>=0;i--)
        if(s1[i]!=s2[n-m+i])
        return false;
    return true;
}
int ps(vector<string>& words)
{
    int c=0;
    int n=words.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ipp(words[i],words[j]) and isu(words[i],words[j]))
                c++;
        }
    }
    return c;
}
int main()
{
  vector<string> v={"pa","papa","ma","mama"};
  cout<<"Ans="<<ps(v);
  return 0;

}







