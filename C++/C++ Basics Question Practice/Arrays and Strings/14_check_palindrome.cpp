#include <iostream>
#include <cstring> // For strlen

bool checkPalindrome(const char* str) {
    int len = strlen(str); // Get the length of the C-string
    int i = 0;
    int j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    std::string s = "madam"; // Test with a palindrome
    std::cout << (checkPalindrome(s.c_str()) ? "Palindrome" : "Not a palindrome") << std::endl;
    return 0;
}