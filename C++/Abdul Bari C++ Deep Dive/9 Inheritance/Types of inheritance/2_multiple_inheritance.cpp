#include<iostream>

using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine started" << endl;
    }
};

class Transmission {
public:
    void startTransmission() {
        cout << "Transmission started" << endl;
    }
};

class Car : public Engine, public Transmission {
    // Car inherits from both Engine and Transmission
};

int main() {

    return 0;
}