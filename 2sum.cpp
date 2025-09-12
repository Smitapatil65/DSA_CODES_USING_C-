#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int sub(vector<int>&a)
{
   int n=a.size();
   int c=0;
   int el=-1;
   for(int i=0;i<n;i++)
   {
       if(c==0)
       {
           el=a[i];
           c=1;
       }else if(a[i]==el)
       {
         c++;
       }else{
         c--;
       }
   }
   int c1=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]==el)c1++;
   }
   if(c1>(a.size()/2))
   {
       return el;
   }
   return -1;
}
int main()
{
    vector<int> n={1,1,2,0,2,1,1};
    cout<<sub(n);
    return 0;
}
