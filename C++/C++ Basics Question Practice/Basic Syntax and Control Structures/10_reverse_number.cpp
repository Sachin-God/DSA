#include<iostream>

int main() {
    int a, b = 0;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    int c = a;
    while (a > 0) {
        b = b * 10 + a % 10;
        a /= 10;
    }
    std::cout<<"Reverse of number "<<c<<" is "<<b<<std::endl;
    return 0;
}