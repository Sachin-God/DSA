#include<iostream>
#include <unordered_map>
#include<string>

int main() {
    std::string s = "Hello world";
    std::unordered_map<char,int> map;
    for (int x : s) {
        if (x != ' '){
            map[x] += 1;
        }
    }
    for (const auto& pair : map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    return 0;
}