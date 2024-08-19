#include<iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

int add(double x, double y){
    return x + y;
}

int main() {
    cout<<add(5,4)<<endl; // 9
    cout<<add(5.25,4.37)<<endl; // 9
    return 0;
}