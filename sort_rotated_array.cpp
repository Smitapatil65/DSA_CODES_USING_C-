#include<iostream>
#include<vector>
using namespace std;
bool ror(vector<int> &a)
{   int c=0;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[(i+1)%n])
        {
            c++;
        }
        if(c>1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> a={3,4,5,1,2};
    cout<<(ror(a)?"true":"false");

}
