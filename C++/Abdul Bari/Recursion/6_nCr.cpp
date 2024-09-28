#include<iostream>
#include "factorial.h"
using namespace std;

// Naive and inefficient way
float C(float n, float r){
    float a = factorial(n);
    float b = factorial(n-r);
    float c = factorial(r);
    return a / (b * c);
}

// a good recursive way
int C(int n, int r){
    if (r == 0 || n == r) return 1;

    return C(n-1, r-1) + C(n-1, r);
}

int main() {
    cout<<C(5,2);
    return 0;
}