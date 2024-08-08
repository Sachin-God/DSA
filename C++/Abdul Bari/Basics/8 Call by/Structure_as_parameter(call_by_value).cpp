#include<iostream>

using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
// call by value
int area(struct Rectangle r){
    return r.length * r.breadth;
}

int main() {
    Rectangle r = {1,2};
    cout<<area(r)<<endl;
    return 0;
}