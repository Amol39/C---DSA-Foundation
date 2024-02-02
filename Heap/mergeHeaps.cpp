// Given two binary max heaps as arrays,the task is to merge the given heaps 

#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& v, int size, int curr) {
    while ((2 * curr + 1) < size) {
        int leftchild = 2 * curr + 1;
        int rightchild = 2 * curr + 2;
        int maxchild = leftchild;

        if (rightchild < size && v[rightchild] > v[leftchild]) {
            maxchild = rightchild;
        }
        if (v[maxchild] <= v[curr]) {
            return;
        }
        swap(v[maxchild], v[curr]);
        curr = maxchild; // Update the current index
    }
}

vector<int> mergeHeaps(vector<int>& a, vector<int>& b, int n, int m) {
    vector<int> mergeHeap;
    for (auto ele : a) {
        mergeHeap.push_back(ele);
    }
    for (auto ele : b) {
        mergeHeap.push_back(ele);
    }

    // Perform heapification to construct a valid max heap
    for (int i = n + m / 2 - 1; i >= 0; i--) {
        heapify(mergeHeap, n + m, i);
    }

    return mergeHeap;
}

int main() {
    vector<int> a = {10,5,6,2};
    int n = 4; // Size of array 'a'
    vector<int>b = {12, 7, 9};
    int m = 3; // Size of array 'b'

    vector<int> result = mergeHeaps(a,b, n, m);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
