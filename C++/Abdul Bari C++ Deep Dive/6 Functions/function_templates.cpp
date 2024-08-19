#include<iostream>
using namespace std;

template <class T>
T maximum(T x, T y){
    if (x > y){
        return x;
    } else {
        return y;
    }
}

int main() {
    cout<<maximum(4,5)<<endl;
    cout<<maximum(9.84,5.45)<<endl;
    return 0;
}