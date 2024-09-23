#include <iostream>

class Outer {
private:
    int outerData = 100;

    friend class Inner;  // Granting access to Inner class

public:
    class Inner {
    public:
        void accessOuter(Outer& o) {
            // Accessing private member of Outer class
            std::cout << "Outer class private member: " << o.outerData << std::endl;
        }
    };
};

int main() {
    Outer outer;
    Outer::Inner inner;

    inner.accessOuter(outer);  // Accessing outer class member via inner class

    return 0;
}
