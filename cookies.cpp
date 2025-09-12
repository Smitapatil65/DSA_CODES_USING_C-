#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fun(vector<int>&g ,vector<int>&s)
{
    int i=0,j=0;
    sort(begin(g),end(g));
    sort(begin(s),end(s));
    int m=g.size();
    int n=s.size();
    while(i<m && j<n)
    {
        if(g[i]<=s[j])
        {
            i++;
        }
        j++;
    }
    return i;
}
int main()
{
    vector<int> g={1,2,3};
    vector<int> s={1,1};
    cout<<"ans="<<fun(g,s);
    return 0;

}
