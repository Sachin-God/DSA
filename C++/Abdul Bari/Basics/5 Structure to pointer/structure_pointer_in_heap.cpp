#include<iostream>

using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    // struct Rectangle *p = malloc(sizeof(struct Rectangle)); but this is wrong because malloc return us a void generic data type
    struct Rectangle *p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 10;
    cout<<(*p).length<<endl;
    p->breadth = 20;
    cout<<p->breadth<<endl;

    free(p);
    return 0;
}