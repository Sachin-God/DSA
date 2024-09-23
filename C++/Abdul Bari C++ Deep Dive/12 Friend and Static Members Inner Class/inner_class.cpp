#include <iostream>

class Outer {
public:
    class Inner {  // Nested class
    public:
        void display() {
            std::cout << "Inside Inner class" << std::endl;
        }
    };

    void outerDisplay() {
        std::cout << "Inside Outer class" << std::endl;
    }
};

int main() {
    Outer outer;                // Instance of the outer class
    Outer::Inner inner;         // Instance of the inner class

    outer.outerDisplay();       // Calling outer class method
    inner.display();            // Calling inner class method

    return 0;
}
