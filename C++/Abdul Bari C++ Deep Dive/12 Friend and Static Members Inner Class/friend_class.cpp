#include <iostream>

using namespace std;

class Test{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend class Test1;
};

class Test1{
public:
    Test t;
    void fun()
    {
        t.a = 10;
        t.b = 5;
        t.c = 0;
    }
};

class Test2{
public:
    Test t;
    void fun()
    {
        t.a = 10;
        t.b = 5;
        t.c = 0;
    }
};

int main()
{
    return 0;
}