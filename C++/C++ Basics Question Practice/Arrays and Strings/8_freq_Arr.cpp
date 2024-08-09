#include<iostream>
#include <unordered_map>

int main() {
    int arr[7] = {1,2,2,3,3,4,5};
    std::unordered_map<int,int> map;
    for (int x : arr) {
        map[x] += 1;
    }
    for (const auto& pair : map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    return 0;
}