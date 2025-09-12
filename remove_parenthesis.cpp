#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string para(string s)
{
    int n=s.size();
    int c=0;
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(s[i]==')')c--;
        if(c!=0)ans.push_back(s[i]);
        if(s[i]=='(')c++;
    }
    return ans;
}
int main()
{

    string s="(()())(())";
    cout<<"remove outermost parenthesis="<<para(s);
    return 0;
}
