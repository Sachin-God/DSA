#include<iostream>
using namespace std;

void diplay(){
    cout<<"Hello World"<<endl;
}
int main() {
    void (*fn)(); // initialization
    fn = diplay; //declaration
    (*fn)(); // Calling
    return 0;
}