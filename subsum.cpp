#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int sub(vector<int>&a,int k)
{
    int n=a.size();
    unordered_map<int,int>m;
    m[0]=1;
    int ps=0,c=0;
    for(int i=0;i<n;i++)
    {
        ps+=a[i];
        int r=ps-k;
        c+=m[r];
        m[ps]+=1;
    }
    return c;
}

int main()
{
   vector<int> a={1,2,3,4,5,-2,2,3};
   int k=5;
   cout << "Number of subarrays with sum " << k << ": " << sub(a, k) << endl;
   return 0;

}





