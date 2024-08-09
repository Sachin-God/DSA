#include<iostream>

int main() {
    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    if( a% 2 == 0){
        std::cout<<"Even Number"<<std::endl;
    } else {
        std::cout<<"Odd Number"<<std::endl;
    }
    return 0;
}