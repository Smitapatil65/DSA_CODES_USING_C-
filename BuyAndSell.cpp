#include<iostream>
#include<vector>
using namespace std;


int pro(vector<int>&a)
{  int n=a.size();
   int min_p=a[0];
   int profit=0;
   int i=1;
   while(i<n)
   {
       if(a[i]<min_p)
       {
           min_p=a[i];
       }else{
        profit=max(profit,a[i]-min_p);
       }
       i++;
   }
    return profit;

}
int main()
{
    vector<int>a={7,1,5,3,6,4};
    cout<<"Maximum Profit"<<pro(a);
    cout<<endl;

}



