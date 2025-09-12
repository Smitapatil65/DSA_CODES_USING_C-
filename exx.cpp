#include <iostream>
#include <vector>
using namespace std;

int missing(vector<int>& arr, int k) {
    int n = arr.size();
    int l = 0, h = n - 1;

    while (l <= h) {
        int mid = (l + h) / 2;
        int mis = arr[mid] - (mid + 1);

        if (mis < k) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    return k + h + 1;  // Corrected return statement
}

int main() {
    vector<int> arr = {2,3,4,7,11};
    int k = 5;
    cout << "missing = " << missing(arr, k) << endl;
}
