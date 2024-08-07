#include<iostream>

using namespace std;

int * array(int n) { // used to return a pointer of an array of size n created inside memory heap
    int* p;
    p = (int*)malloc(n * sizeof(int));  // can also use ----- int* p = new int[n];
    return p;
}

int main() {
    int n = 10;
    int* arr = array(n);

    // Use the array (e.g., initialize or modify its elements)
    for (int i = 0; i < n; ++i) {
        arr[i] = i * 2;  // Example initialization
    }

    // Clean up the allocated memory when done
    delete[] arr;

    return 0;
}
