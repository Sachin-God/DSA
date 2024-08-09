#include<iostream>
#include<string>

int main() {
    std::string str1 = "Hello_";
    std::string str2 = "World";

    str1 += str2;
    std::cout<<str1<< std::endl;
    return 0;
}