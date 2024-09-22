#include<iostream>
using namespace std;

class Base {
public:
    virtual void display(){
        cout<<"Base Class"<<endl;
    }
};

class Child1 : public Base {
};

class Child2 : public Base {
public:
    void display() override{
        cout<<"Child Class"<<endl;
    }
};

int main() {
    Base a;
    Child1 b;
    Child2 c;
    a.display();
    b.display();
    c.display();
    return 0;
}