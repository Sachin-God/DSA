// in pass by pointer/ address adresses of Actual arguments are passed and any change inside will affect the Actual Argument

#include<iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"Swapped Values of a = "<<(*a)<<" & b = "<<(*b)<<endl;
}

int main() {
    int a,b;
    a = 10;
    b = 20;
    cout<<"Actual Values of a = "<<a<<" & b = "<<b<<" Before Swapping"<<endl;
    swap(&a,&b);
    cout<<"Actual Values of a = "<<a<<" & b = "<<b<<" after Swapping"<<endl;
    return 0;
}