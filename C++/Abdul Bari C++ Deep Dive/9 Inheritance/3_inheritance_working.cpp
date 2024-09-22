#include<iostream>
using namespace std;

class Base{
public:
Base(){
    cout<<"Base Class"<<endl;
}

Base(int a){
    cout<<"Base Class : "<<a<<endl;
}
};

class Derived : public Base {
public:
Derived(){
    cout<<"Derived Class"<<endl;
}

Derived(int b){
    cout<<"Derived Class : "<<b<<endl;
}

Derived(int a, int b) : Base (a) {
    cout<<"Derived Class : "<<b<<endl;
}
};

int main() {
    Derived d;

    Derived d(10);

    Derived d(10,20); 
    return 0;
}