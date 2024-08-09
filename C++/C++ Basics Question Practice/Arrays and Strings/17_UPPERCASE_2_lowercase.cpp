#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "HELLO";
    for (int i = 0 ; i < s.size() ; i++) {
        int x = static_cast<int> (s[i]);
        s[i] = static_cast<char>(x+32);
    }
    
    cout << s << endl;
    return 0;
}