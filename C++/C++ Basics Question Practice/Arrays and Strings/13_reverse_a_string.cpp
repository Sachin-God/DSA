#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Hello World";
    string str = "";
    for (int i = s.size() - 1 ; i >= 0; i--) {
        str += s[i];
    }
    
    cout << str << endl;
    return 0;
}