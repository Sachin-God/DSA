#include<iostream>
using namespace std;

namespace MyNamespace {
    int myVariable = 10;

    void myFunction() {
        cout << "Hello from MyNamespace!" << endl;
    }
}

int main() {
    MyNamespace::myFunction(); // Calls the function from MyNamespace
    cout << MyNamespace::myVariable; // Accesses the variable from MyNamespace
    return 0;
}