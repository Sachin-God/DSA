#include <iostream>

using namespace std;

class Test{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void fun();
};

void fun(){
    Test t;
    t.a = 10;
    t.b = 5;
    t.c = 0;
}

void fun2 (){
    Test t;
    t.a = 10;
    t.b = 5;
    t.c = 0;
}
int main(){
    return 0;
}