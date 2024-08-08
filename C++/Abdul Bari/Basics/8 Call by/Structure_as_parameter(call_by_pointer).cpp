#include<iostream>

using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
// call by Pointer
int area(struct Rectangle *r){
    return (*r).length * (*r).breadth;
}

void change_length(struct Rectangle *r){
    cout<<"old Length is "<<(*r).length<<endl;
    (*r).length++;
    cout<<"New Length is "<<(*r).length<<endl;
}

int main() {
    Rectangle r = {1,2};
    cout<<"Old Area : "<<area(&r)<<endl;
    change_length(&r);
    cout<<"New Area : "<<area(&r)<<endl;
    return 0;
}