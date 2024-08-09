#include<iostream>

int main() {
    int a, count = 0;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    int c = a;
    while (a > 0) {
        count += 1;
        a /= 10;
    }
    std::cout<<"Number of Digits in "<<c<<" are "<<count<<std::endl;
    return 0;
}