#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> fun(vector<int> &a,vector<int> &b)
{
    vector<int> ans;
    unordered_map<int,int> m;
    stack<int> s;

    for(int i=b.size()-1;i>=0;i--)
    {
        while(s.size()>0 && s.top()<=b[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            m[b[i]]=-1;
        }else{
            m[b[i]]=s.top();
        }
        s.push(b[i]);
    }

    for(int i=0;i<a.size();i++)
    {
       ans.push_back(m[a[i]]);
    }
    return ans;

}
int main()
{
    vector<int>a={1,2,3};
    vector<int>b={6,9,1,8,2,1,3,4};
    vector<int>c=fun(a,b);
    for(int i :c)
    {
        cout<<" "<<i<<" ";
    }
    cout<<endl;
    return 0;


}
