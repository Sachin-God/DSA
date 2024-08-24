#include<iostream>
using namespace std;

class Shallow {
public:
    int* data;

    Shallow(int value) {
        data = new int(value);
    }

    // Shallow copy constructor
    Shallow(const Shallow &source) : data(source.data) {
        cout << "Shallow copy constructor - shallow copy made" << endl;
    }

    void displayData() const {
        cout << "Data: " << *data << endl;
    }

    // Destructor is called, leading to potential double deletion
    ~Shallow() {
        delete data;
        cout << "Destructor freeing data" << endl;
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2 = obj1; // Shallow copy

    obj1.displayData();
    obj2.displayData();

    return 0;
}
