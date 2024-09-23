#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero error!";  // Throwing an exception
    }
    return a / b;
}

int multiply(int a, int b) throw (int) {
    if (b == 0) {
        throw 0;  // Throwing an int exception for multiplication with zero
    }
    return a * b;
}

int main() {
    int x = 10, y = 0;

    // Handling division
    try {
        int result = divide(x, y);
        cout << "Division Result: " << result << endl;
    }
    catch (const char* e) {
        // Catching division-by-zero exception
        cout << "Division Exception: " << e << endl;
    }

    // Handling multiplication
    try {
        int result = multiply(x, y);
        cout << "Multiplication Result: " << result << endl;
    }
    catch (int e) {
        // Catching multiplication-by-zero exception
        cout << "Multiplication Exception: Multiplication with zero is not allowed!" << endl;
    }
    return 0;
}
