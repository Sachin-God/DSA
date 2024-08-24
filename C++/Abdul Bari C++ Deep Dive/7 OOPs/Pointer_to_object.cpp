#include<iostream>
using namespace std;

class Rectangle{
public: 
    int length, breadth;

    int perimeter(){
        return 2 * (length + breadth);
    }

    int area(){
        return length * breadth;
    }
};

int main() {
    Rectangle *r = new Rectangle(); // Allocate memory for the Rectangle object

    r->length = 6; // -> is arrow operator to visit length var space at address r
    r->breadth = 4;

    cout << "Perimeter: " << r->perimeter() << endl;
    cout << "Area: " << r->area() << endl;

    delete r; // Free the allocated memory

    return 0;
}