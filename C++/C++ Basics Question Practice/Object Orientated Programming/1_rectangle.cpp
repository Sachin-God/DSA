#include<iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;
public:
    // Rectangle(int h, int w) : height(h), width(w) {
    //     // Using initialization list for better practice
    // }
    Rectangle(int h, int w){
        this->width = w;
        this->height = h;
    }

    int area() {
        return this->width * this->height;
    }

    int perimeter() {
        return 2 * (this->width + this->height);
    }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area: " << rect.area() << endl; // Output the area
    cout << "Perimeter: " << rect.perimeter() << endl; // Output the area
    return 0;
}