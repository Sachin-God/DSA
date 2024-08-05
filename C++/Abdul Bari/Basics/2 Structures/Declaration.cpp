#include<iostream>

using namespace std;

// Defining a structure
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // Declaring a Structure
    struct Rectangle r;
    r.length = 45;
    r.breadth = 20;
    cout<<r.length<<endl;

    // way 2
    struct Rectangle r2 = {2,5};
    cout<<r2.length<<endl;

    // we can also declare it like the way shown beloe as using struct is not mandatory in cpp unlike c
    Rectangle rect = {1,2};
    cout<<rect.length<<endl;

    return 0;
}