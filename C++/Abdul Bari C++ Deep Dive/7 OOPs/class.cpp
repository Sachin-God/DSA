#include<iostream>
using namespace std;

class Quadrilateral
{
private:
    int side1, side2, side3, side4, angle;
public: 
    // Constructor
    Quadrilateral(int side1, int side2, int side3, int side4, int angle){
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
        this->side4 = side4;
        this->angle = angle;
    }

    bool is_rect(){
        if (side1 == side3 && side2 == side4 && angle == 90){
            cout << "true" << endl;
            return true;
        }
        cout << "False" << endl;
        return false;
    }

    bool is_square(){
        if (side1 == side2 && side2 == side3 && side3 == side4 && angle == 90){
            cout << "true" << endl;
            return true;
        }
        cout << "False" << endl;
        return false;
    }
};

int main() {
    Quadrilateral rectangle(40, 50, 40, 50, 90);
    cout << rectangle.is_rect() << endl;
    cout << rectangle.is_square() << endl;

    Quadrilateral square(50, 50, 50, 50, 90);
    cout << square.is_rect() << endl;
    cout << square.is_square() << endl;

    return 0;
}