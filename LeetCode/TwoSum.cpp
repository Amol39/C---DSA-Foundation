#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j}; // Return the indices as a vector
            }
        }
    }
    return {}; // Return an empty vector if no solution is found
}

int main() {
    int n;
    cout << "Enter Size of vector: ";
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter Target Element: ";
    int target;
    cin >> target;
    
    vector<int> result = twoSum(nums, target);
    
    if(result.size() == 2) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    return 0;
}
