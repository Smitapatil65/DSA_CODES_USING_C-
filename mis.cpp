#include <iostream>
#include <vector>
using namespace std;
int miss(vector<int>&a,int k)
{
    int n=a.size();
    int l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        int mis=a[m]-(m+1);
        if(mis<k)
        {
            l=m+1;
        }else{
            h=m-1;
        }
    }

    return k+h+1;
}
int main() {
    vector<int> arr = {2,3,4,7,11};
    int k = 5;
    cout << "missing = " << miss(arr, k) << endl;
}
