#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int>&a)
{
    int n=a.size();

    for(int i=0;i<n;i+=2)
    {   if(i+1<n)
       {
          swap(a[i],a[i+1]);
       }
    }
}
int main()
{
    vector<int> a = {1,2,3,4,1};
    sub(a);
    for(auto i:a)
    {
        cout<<i;
    }
    return 0;

}





