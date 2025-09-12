#include<iostream>
#include<vector>
using namespace std;
int fun(vector<int>&a)
{
    int n=a.size();
    int big=a[0];
    int big0=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>big)
        {
            big0=big;
            big=a[i];
        }
        else if(a[i]<big && a[i]>big0)
        {
            big0=a[i];
        }
    }

    return big0;
}
int main()
{
    vector<int> v={4,8,3,2,5};
    cout<<fun(v);
    return 0;

}



