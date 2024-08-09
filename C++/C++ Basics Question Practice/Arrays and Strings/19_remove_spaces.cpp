#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "hello World To You";
    string ans = "";
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] != ' ')
        {
            ans += s[i];
        }
        
    }
    
    cout << ans << endl;
    return 0;
}