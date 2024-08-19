#include<iostream>
using namespace std;

int gl = 52; // Global Variable

void fun(){
    int a = 5; // local Variable
    static int x = 5; // Static Variable
    x++;
    cout<<a<<" "<<x<<endl;
}
int main() {
    fun(); // 5 6
    fun(); // 5 7
    fun();  // 5 8
    return 0;
}