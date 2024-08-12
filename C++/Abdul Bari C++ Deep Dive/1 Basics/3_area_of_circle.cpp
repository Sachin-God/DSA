#include<iostream>
#define pi 3.14159f
using namespace std;

int main() {
    float radius;
    cout<<"Enter Radius : ";
    cin>>radius;

    float area = pi * radius * radius;
    float ar = (float) 22 / 7 * radius * radius;
    cout<<"way 1 : area of triangle is "<<area<<endl;
    cout<<"way 2 : area of triangle is "<<ar;
    return 0;
}