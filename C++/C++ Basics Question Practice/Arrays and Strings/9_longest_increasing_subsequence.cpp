#include <iostream>
#include <vector>

using namespace std;

void printVector(const std::vector<int>& vec) {
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    vector<int> arr;
    int nums[] = {10,9,2,5,3,7,101,18};

    for (int i = 0; i < (sizeof(nums) / sizeof(nums[0])) - 1; i++) {
        vector<int> x = {nums[i]};
        for (int j = i+1; j < (sizeof(nums) / sizeof(nums[0])); j++) {
            if (x.back() < nums[j]) {
                x.push_back(nums[j]);
            }
        }
        if (x.size() > arr.size()){
            arr = x;
        }
    }
    printVector(arr);
    return 0;
}