#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> arr) {
    for (int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

// Recursive function to generate combinations
void combination(vector<int> nums, vector<int> &temp, int idx, int k) {
    if (idx >= nums.size()) return;
    if (temp.size() == k) {
        print(temp);
        return;
    }
    // Include the current element and move to the next
    temp.push_back(nums[idx]);
    combination(nums, temp, idx + 1, k);
    
    // Exclude the current element and move to the next
    temp.pop_back();
    combination(nums, temp, idx + 1, k);
}

int main() {
    vector<int> nums;
    for (int i = 1; i <= 5; i++){
        nums.push_back(i);
    }

    vector<int> temp;

    combination(nums, temp, 0, 2);
    
    return 0;
}