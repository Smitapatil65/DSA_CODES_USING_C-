#include <iostream>
#include <vector>
using namespace std;

class Heap {
public:
    void Heapify(vector<int>& arr, int n, int i) {
        int large = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l < n && arr[l] > arr[large])
            large = l;
        if (r < n && arr[r] > arr[large])
            large = r;

        if (large != i) {
            swap(arr[i], arr[large]);
            Heapify(arr, n, large);
        }
    }

    void buildHeap(vector<int>& arr, int n) {
        for (int i = (n / 2) - 1; i >= 0; i--) {
            Heapify(arr, n, i);
        }
    }

    void heapSort(vector<int>& arr) {
        int n = arr.size();
        buildHeap(arr, n);
        for (int i = n - 1; i >= 1; i--) {
            swap(arr[0], arr[i]);
            Heapify(arr, i, 0);
        }
    }
};

int main() {
    vector<int> arr = {4, 10, 3, 5, 1};
    Heap h;
    h.heapSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
}
