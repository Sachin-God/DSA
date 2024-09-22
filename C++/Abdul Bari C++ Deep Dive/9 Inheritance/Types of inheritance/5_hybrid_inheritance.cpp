#include<iostream>

using namespace std;

class Animal {
public:
    void breathe() {
        cout << "Animal breathes" << endl;
    }
};

class Mammal : public Animal {
public:
    void feedMilk() {
        cout << "Mammal feeds milk" << endl;
    }
};

class Bird : public Animal {
public:
    void layEggs() {
        cout << "Bird lays eggs" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void fly() {
        cout << "Bat flies" << endl;
    }
};

int main() {

    return 0;
}