#include <iostream>
#include <string>
using namespace std;


int num2(string &s,int pos)
{
    int n=s.size();
    if(pos==n) return 1;
    if(s[pos]=='0') return 0;
    int c=num2(s,pos+1);
    if(pos<n-1 && (s[pos]=='1'|| (s[pos]=='2'&& s[pos+1]<='6')))
    {
        c+=num2(s,pos+2);
    }
    return c;
}
int num(string s)
{
    return num2(s,0);
}
int main()
{
    string s;
    cout<<"Enter string:";
    cin>>s;
    cout<<"Res="<<num(s);
    return 0;
}
