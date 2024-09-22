#include<iostream>

using namespace std;

class LivingBeing {
public:
    void grow() {
        cout << "Living being grows" << endl;
    }
};

class Animal : public LivingBeing {
public:
    void move() {
        cout << "Animal moves" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {

    return 0;
}