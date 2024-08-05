#include<iostream>

using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle r = {1,2};
    struct Rectangle *p = &r;
    r.length = 15;
    cout<<r.length<<endl;
    cout<<(*p).length<<endl;

    // to change the data at that address we can either use dereferencing or a arrow
    (*p).length = 20; // since . operator have a higher precedence than * first p.legth will run which will give a error
    cout<<(*p).length<<endl;
    p->length = 10;
    cout<<(*p).length<<endl;
    return 0;
}