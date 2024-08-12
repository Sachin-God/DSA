#include<iostream>

using namespace std;

int main() {
    // range of int data type is cyclic
    int min, max;
    min = -2147483648;
    max = 2147483647;
    cout<<"incrementing max : "<<++max<<endl; //-2147483648
    cout<<"decrementing min : "<<--min<<endl; //2147483647
    return 0;
}