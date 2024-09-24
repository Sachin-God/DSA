#include<iostream>
#define pi 3.14159 //preprocessor directive
using namespace std;

int update(const int &x, int y){
    x = 5;
}

int main() {
    const int a = 5;
    int b = 6;
    const int *ptr = &b;
    // ++*ptr;  const pointer can be accessed but cannot be modified
    return 0;
}