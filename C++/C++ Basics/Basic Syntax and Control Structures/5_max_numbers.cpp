#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if (a>b & a>c){
        cout<<"a is the largest number"<<endl;
    } else if (b>a & b>c){
        cout<<"b is the largest number"<<endl;
    } else {
        cout<<"c is the largest number"<<endl;
    }
    return 0;
}