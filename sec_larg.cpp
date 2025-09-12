#include<iostream>
#include<vector>
using namespace std;
int fun(vector<int>&a)
{
    int n=a.size();
    int big=a[0];
    int big2=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>big)
        {
            big2=big;
            big=a[i];
        }else if(a[i]<big && a[i]>big2)
        {
            big2=a[i];
        }

    }
   return big2;
}
int main()
{
    vector<int> a={1,2,3,4};
    cout<<fun(a);
    return 0;

}













