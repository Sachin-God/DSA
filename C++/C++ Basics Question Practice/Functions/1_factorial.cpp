#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << n << " is " << factorial(n) << endl;
    }

    return 0;
}