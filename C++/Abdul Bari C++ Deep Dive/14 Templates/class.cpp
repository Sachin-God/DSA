#include <iostream>
using namespace std;

// Class template
template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }
};

int main() {
    Calculator<int> intCalc;
    Calculator<double> doubleCalc;

    cout << "Integer Addition: " << intCalc.add(10, 5) << endl;
    cout << "Double Addition: " << doubleCalc.add(10.5, 5.5) << endl;

    cout << "Integer Subtraction: " << intCalc.subtract(10, 5) << endl;
    cout << "Double Subtraction: " << doubleCalc.subtract(10.5, 5.5) << endl;

    return 0;
}
