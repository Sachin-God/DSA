#include<iostream>

int main() {
    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    for (int i = 1; i <= 10; i++){
        std::cout<<a<<" x "<<i<<" = "<<a*i<<std::endl;
    }
    return 0;
}