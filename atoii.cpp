#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int atoi(string s)
{
    int n=s.size(),i=0,sign=1;
    long res=0;

    while(i<n && s[i]==' ')i++;
    if(i<n && s[i]=='+' || s[i]=='-')
    {
        sign=(s[i]=='-')?-1:1;
        i++;
    }
    while(i<n && s[i]>='0' && s[i]<='9')
    {
        res=res*10+(s[i]-'0');
        if(res*sign>=INT_MAX) return INT_MAX;
        if(res*sign<=INT_MIN) return INT_MIN;
        i++;
    }

    return (int)(res*sign);
}
int main()
{
    string s="  -57ff67fa09";
    cout<<"res="<<atoi(s);
    return 0;

}
