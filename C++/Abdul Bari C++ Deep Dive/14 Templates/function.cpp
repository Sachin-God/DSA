#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integers: " << add(3, 4) << endl;    // Uses int
    cout << "Doubles: " << add(3.5, 4.5) << endl; // Uses double
    return 0;
}
