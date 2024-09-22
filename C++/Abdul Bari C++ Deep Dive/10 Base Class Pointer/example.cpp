#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function." << endl;
    }

    virtual void show() {
        cout << "Base class show function." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function." << endl;
    }

    void show() override {
        cout << "Derived class show function." << endl;
    }
};

int main() {
    Base* basePtr;        // Base class pointer
    Derived derivedObj;   // Derived class object

    basePtr = &derivedObj;  // Base class pointer pointing to derived class object

    basePtr->display();    // Calls Base class version (no polymorphism)
    basePtr->show();       // Calls Derived class version (polymorphism through virtual functions)

    return 0;
}
