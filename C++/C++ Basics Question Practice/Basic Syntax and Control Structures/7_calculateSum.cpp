#include<iostream>

int main() {
    int a, ans = 0;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    for (int i = 1; i < a+1; i++){
        ans += i;
    }
    std::cout<<"Sum of first "<<a<<" natural numbers is "<<ans<<std::endl;
    return 0;
}