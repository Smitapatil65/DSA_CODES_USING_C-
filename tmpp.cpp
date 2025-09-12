#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>a={6,8,0,1,3};
    stack<int>s;
    vector<int>v(a.size(),0);

    for(int i=a.size();i>=0;i--)
    {
     while(s.size()>0 && s.top()<=a[i])
     {
         s.pop();
     }
     if(s.empty())
     {
         v[i]=-1;
     }else{
         v[i]=s.top();
     }
     s.push(a[i]);
    }
    for(int ii:v)
    {
        cout<<" "<<ii<<" ";
    }
    cout<<endl;
    return 0;

}
