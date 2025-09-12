#include<iostream>
#include<vector>
#include<set>
using namespace std;
int fun(vector<int> &a)
{
    int x1=0,x2=0;
    int N=a.size();
    for(int i=0;i<N;i++)
    {
        x2=x2^a[i];
        x1=x1^i;

    }
    x1=x1^N;
   return x1^x2;
}
int main()
{
    vector<int> a={3,0,1};

    cout<<fun(a);


    return 0;
}
