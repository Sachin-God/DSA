#include<iostream>

using namespace std;

bool palindrome(string str, int idx, int n){
    if (idx >= n / 2) return true;
    if (str[idx] == str[n - idx - 1]){
        return palindrome(str, idx + 1, n);
    } else {
        return false;
    }
}
int main() {
    string str = "abcba";
    cout<<palindrome(str, 0, str.size());
    return 0;
}