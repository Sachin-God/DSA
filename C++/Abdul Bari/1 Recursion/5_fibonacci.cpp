#include <iostream>
using namespace std;

static int f[10];  // Static array to store computed Fibonacci values

int fibonacci(int n) {
    if (n <= 1) {
        f[n] = n;  // Base case: Fibonacci(0) = 0, Fibonacci(1) = 1
        return n;
    }
    
    if (f[n] == -1) {  // Check if the result is already computed
        f[n] = fibonacci(n-1) + fibonacci(n-2);  // Compute and store the result
    }
    
    return f[n];  // Return the stored result
}

int main() {
    // Initialize array to -1 to indicate uncomputed values
    for (int i = 0; i < 10; i++) {
        f[i] = -1;
    }

    int n;
    cout << "Enter the value of n (0-9): ";
    cin >> n;
    
    if (n < 0 || n >= 10) {
        cout << "Error: n must be between 0 and 9." << endl;
        return 1;
    }

    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    return 0;
}
