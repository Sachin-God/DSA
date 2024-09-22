#include<iostream>

using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine engine;  // Car hasA Engine
public:
    void startCar() {
        engine.start();
        cout << "Car is running" << endl;
    }
};

int main() {

    return 0;
}