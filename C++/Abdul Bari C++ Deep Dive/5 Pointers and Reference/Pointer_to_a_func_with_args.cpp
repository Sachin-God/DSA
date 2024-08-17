#include<iostream>
#include<string>
using namespace std;

void diplay(int age, string name){
    cout<<"Hello "<<name<<endl;
}
int main() {
    void (*fn)(int, string); // initialization Don't give x, y arg name
    fn = diplay; //declaration
    (*fn)(20, "Sachin"); // Calling
    return 0;
}