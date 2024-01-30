#include<iostream>
using namespace std;

// 5. Two Sum:
// Given an array of integers, find two numbers such that they add up to a specific target.

int* Sum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] + arr[j] == target) {
                int* result = new int[2];
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return nullptr; // Return nullptr if no such pair is found.
}

int main() {
    int n, target;
    cout << "Enter Size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter Target element: ";
    cin >> target;

    int* elements = Sum(arr, n, target);
    if (elements != nullptr) {
        cout << "Elements are : " << arr[elements[0]] << " and " << arr[elements[1]] << endl;
        delete[] elements; // Don't forget to deallocate the memory.
    } else {
        cout << "No such pair found." << endl;
    }
    return 0;
}
