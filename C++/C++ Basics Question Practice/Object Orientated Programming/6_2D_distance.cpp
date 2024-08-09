#include<iostream>
#include<math.h>
using namespace std;

class Space {
private:
    double x;
    double y;
public:
    Space(double x, double y){
        this->x = x;
        this->y = y;
    }

    void distance(double m, double n){
        double distance = pow(pow(m-x,2) + pow(n-y,2),0.5);
        cout<<"Distance between 2 given points are "<< distance<<endl;
    }
};

int main(){
    Space t(2,2);
    t.distance(6,5);
    return 0;
}