#include<iostream>
using namespace std;

class Rectangle{
protected:
    int length, width; // Protected to allow access in derived class
public:
    Rectangle(int l, int w){
        this->length = l;
        this->width = w;
    }

    void perimeter() {
        cout<<"Perimeter : "<< 2 *(length + width)<<endl;
    }

    void area() {
        cout<<"Area : "<< (length * width)<<endl;
    }

    void setLength(int l){
        this->length = l;
    }

    void setWidth(int w){
        this->width = w;
    }
};

class Cuboid : public Rectangle{
private:
int height;
public:
    Cuboid(int l, int w, int h) : Rectangle(l, w) { // Call Rectangle constructor
        this->height = h;
    }

    void volume() {
        cout << "Volume: " << (length * width * height) << endl;
    }

    void setHeight(int h){
        this->height = h;
    }
};

int main() {
    return 0;
}