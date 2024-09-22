#include<iostream>

using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Mammal : virtual public Animal {
    // Virtual inheritance ensures only one copy of Animal is inherited
};

class Bird : virtual public Animal {
    // Virtual inheritance ensures only one copy of Animal is inherited
};

class Bat : public Mammal, public Bird {
    // Only one copy of Animal is inherited, no ambiguity
};

int main() {

    return 0;
}