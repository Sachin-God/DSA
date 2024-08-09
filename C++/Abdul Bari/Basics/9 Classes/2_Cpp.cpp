#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void initialize(int l, int w)
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
    Rectangle r;
    r.initialize(5,2);
    r.area();
    r.change_length(20);
    r.area();
    return 0;
}