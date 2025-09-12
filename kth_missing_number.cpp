#include <iostream>
#include <vector>
using namespace std;

int missing(vector<int>& arr, int k) {
    int n=arr.size();
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        int miss=arr[mid]-(mid+1);
        if(miss<k)
        {
            l=mid+1;
        }else{
        h=mid-1;
        }

    }

    return k+h+1;



}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int k = 2;
    cout << "missing = " << missing(arr, k) << endl;
}
