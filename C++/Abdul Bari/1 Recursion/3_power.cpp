#include<iostream>
using namespace std;

// Basic
int power(int a, int n){
    if (n == 0) return 1;
    return a * power(a, n-1);
}

// SomeWhat fast
int pow(int a, int n){
    if (n == 0) return 1;
    if (n%2 == 0){
        return pow(a * a, n/2);
    } else {
        return a * pow(a * a, (n-1)/2);
    }
}

int main() {
    cout<<pow(2,9);
    return 0;
}