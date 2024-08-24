#include <iostream>

using namespace std;

class Rectangle{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w){
        length = l;
        width = w;
    }

    void area();

    void change_length(int l){
        length = l;
    }
};

void Rectangle::area(){
    printf("%d \n", length * width);
}

int main()
{
    Rectangle r(5,4);
    r.area();
    r.change_length(20);
    r.area();
    return 0;
}