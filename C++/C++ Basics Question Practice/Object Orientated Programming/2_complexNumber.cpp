#include<iostream>
using namespace std;

class Complex {
private:
    int pos;
    int com;
public:
    Complex(int p, int c){
        this->pos = p;
        this->com = c;
    }

    void add(int m, int n){
        this->pos += m;
        this->com += n;
    }

    void subtract(int m, int n){
        this->pos -= m;
        this->com -= n;
    }
    
    void print(){
        cout<<this->pos<<" + " << this->com<<"j"<<endl;
    }
};

int main(){
    Complex number(2,3);
    number.print();
    number.add(1,2);
    number.print();
    number.subtract(1,2);
    number.print();
    return 0;
}