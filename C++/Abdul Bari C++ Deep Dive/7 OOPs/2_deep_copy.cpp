#include<iostream>
using namespace std;

class Deep {
public:
    int* data;

    Deep(int value) {
        data = new int(value);
    }

    // Deep copy constructor
    Deep(const Deep &source) {
        data = new int(*source.data);
        cout << "Deep copy constructor - deep copy made" << endl;
    }

    void displayData() const {
        cout << "Data: " << *data << endl;
    }

    ~Deep() {
        delete data;
        cout << "Destructor freeing data" << endl;
    }
};

int main() {
    Deep obj1(10);
    Deep obj2 = obj1; // Deep copy

    obj1.displayData();
    obj2.displayData();

    return 0; // Destructor is called, but no issues as each object manages its own resource
}
