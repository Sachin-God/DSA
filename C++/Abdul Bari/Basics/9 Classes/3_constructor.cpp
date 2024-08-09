#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
// Constructor is something which gets called every time we initialize an object
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        printf("%d \n", length * width);
    }

    void change_length(int l)
    {
        length = l;
    }
};

int main()
{
    Rectangle r(5,4);
    r.area();
    r.change_length(20);
    r.area();
    return 0;
}