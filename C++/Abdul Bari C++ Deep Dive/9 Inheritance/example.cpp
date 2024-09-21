#include<iostream>
using namespace std;

class Base{
public:
    int x;
    void print() {
        cout<<x<<endl;
    }
};

class Derived : public Base {
public:
    int y;
    void print(){
        cout<<x + y<<endl;
    }
};

int main() {
    Derived d;
    d.y = 5;
    d.x = 22;
    d.print();
    return 0;
}