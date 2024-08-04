#include<iostream>

using namespace std;

int main() {
    int* a;
    int b = 10;
    a = &b;
    cout<<"Address of variable a is "<<a<<endl;
    cout<<"Value of variable a is "<<*a<<endl; // dereferencing

    // memory allocation in memory heap
    cout<<"C malloc"<<endl;
    int* p = (int*)malloc(5*sizeof(int));

    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        p[i] = i * 10; // Assign some values to the array elements
    }

    // Print the array
    for (int i = 0; i < 5; ++i) {
        cout << "p[" << i << "] = " << p[i] << endl;
    }

    cout<<"C++ malloc"<<endl;
    int* q = new int[5];
    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        q[i] = i * 10; // Assign some values to the array elements
    }

    // Print the array
    for (int i = 0; i < 5; ++i) {
        cout << "q[" << i << "] = " << q[i] << endl;
    }

    return 0;
    free(q);
    free(p);
}