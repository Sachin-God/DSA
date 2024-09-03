#include<iostream>
using namespace std;

class Complex
{
private:
    int real, img;
public:
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }

    Complex add(const Complex& num) const {
        return Complex(real + num.real, img + num.img);
    }

    Complex operator+(const Complex& num) const {
        return Complex(real + num.real, img + num.img);
    }

    void display() const {
        std::cout << real << " + " << img << "i" << std::endl;
    }
};


int main() {
    Complex a(5,4);
    Complex b(5,4);
    Complex c = a + b;
    c.display();
    Complex d = a.add(b);
    d.display();
    return 0;
}