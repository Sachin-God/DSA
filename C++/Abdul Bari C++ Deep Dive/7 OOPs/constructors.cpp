#include<iostream>

using namespace std;

class Rectangle{
private:
    int length;
    int width;

public:
    // Constructor: Called when an object of the class is created
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Destructor: Called when an object of the class is destroyed
    ~Rectangle() {
        // Clean-up code, if needed, would go here
        cout << "Rectangle object is being deleted" << endl;
    }
};

int main() {

    return 0;
}

