#include<iostream>
using namespace std;

int main() {
    int* p, *q;
    p = (int*)malloc(sizeof(int) * 5); // C-Style
    q = new int[5]; // C++ Style
    for (int i = 0; i < 5; i++){
        p[i] = i*i;
        q[i] = i;
    }
    for (int i = 0; i < 5; i++){
        cout<<p[i]<<" "; // 0 1 4 9 16
    }
    free(p);
    delete[] q;
    return 0;
}