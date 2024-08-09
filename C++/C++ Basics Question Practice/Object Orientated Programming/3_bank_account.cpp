#include<iostream>
using namespace std;

class Bank {
private:
    int balance;
public:
    Bank(int c){
        this->balance = c;
    }

    void deposit(int n){
        this->balance += n;
    }

    void withdraw(int n){
        this->balance -= n;
    }
    
    void print(){
        cout<< this->balance<<endl;
    }
};

int main(){
    Bank number(3);
    number.print();
    number.deposit(1);
    number.print();
    number.withdraw(2);
    number.print();
    return 0;
}