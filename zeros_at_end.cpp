#include <iostream>
#include <vector>
using namespace std;
void movez(vector<int>&a)
{
    int n=a.size();
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }

}
int main()
{
    vector<int> a={1,2,0,3,4,0,0,4,5};
    movez(a);
    for(int num:a)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
