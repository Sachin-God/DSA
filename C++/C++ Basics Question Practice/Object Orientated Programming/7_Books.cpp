#include<iostream>
#include<string>
using namespace std;

class Books {
private:
    string title, author;
    double price;
public:
    Books(string title, string author, double price){
        this->author = author;
        this->title = title;
        this->price = price;
    }

    void print () {
        cout<<"Title : "<<this->title<<endl;
        cout<<"Author : "<<this->author<<endl;
        cout<<"Price : "<<this->price<<endl;
    }
};

int main() {
    Books book1("Sugar Daddy", "Sachin", 69.69);
    book1.print();
    return 0;
}