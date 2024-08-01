#include<iostream>
using namespace std;
#define pi 3.14159

int main() {
    int r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    auto area = pi * r * r;
    cout<<"Area of circle is "<<area<<endl;
    return 0;
}