#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Hello World";
    string vowel = "aeiou";
    int count = 0;
    for (int i = 0 ; i < s.size() ; i++) {
        for (int j = 0; j < vowel.size(); j++) {
            if (s[i] == vowel[j]){
                count += 1;
            }
        }
    }
    
    cout << s.size() - count << endl;
    return 0;
}