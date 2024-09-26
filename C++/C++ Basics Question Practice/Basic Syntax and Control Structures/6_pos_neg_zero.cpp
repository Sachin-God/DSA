#include<iostream>

int main() {
    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    if( a == 0){
        std::cout<<"Zero"<<std::endl;
    } else if (a < 0) {
        std::cout<<"Negative Number"<<std::endl;
    } else {
        std::cout<<"Positive Number"<<std::endl;
    }
    return 0;
}