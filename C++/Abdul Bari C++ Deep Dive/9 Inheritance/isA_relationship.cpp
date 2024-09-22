#include<iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal {  // Dog isA Animal
public:
    void bark() {
        cout << "Bark!" << endl;
    }
};

int main() {

    return 0;
}
