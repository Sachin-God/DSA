#include<iostream>

int main() {
    int a, b, c;
    a = 2;
    b = 5;
    std::cout<<"Before swapping a = "<<a<<" and b = "<<b<<std::endl;
    c = a;
    a = b;
    b = c;
    std::cout<<"After swapping a = "<<a<<" and b = "<<b<<std::endl;
    return 0;
}