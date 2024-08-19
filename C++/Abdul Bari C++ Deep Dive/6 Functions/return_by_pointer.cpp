#include<iostream>
using namespace std;

int* array(int size){
    int* p = new int[size];
    for (int i = 0; i < size; i++){
        p[i] = i * 5;
    }
    return p;
}

int main() {
    int* ptr = array(5);
    for (int i = 0; i < 5; i++){
        cout<<*(ptr + i)<<endl;
    }
    return 0;
}