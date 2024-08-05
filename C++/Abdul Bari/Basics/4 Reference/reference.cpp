#include<iostream>

using namespace std;

int main() {
    // reference is nothing but an another name/ alias for an another variable. changing it also affect the original variable
    int a = 4;
    int &ref = a;
    cout << "original values of a = "<<a<<" and ref = "<<ref<<endl;
    ref /= 2;
    cout << "Values after dividing ref by 2 of ref;  a = "<<a<<" and ref = "<<ref<<endl;
    return 0;
}