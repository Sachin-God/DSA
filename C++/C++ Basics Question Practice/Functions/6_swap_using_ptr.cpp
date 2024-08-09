#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *b = *a;
    *a = temp;
}

int main() {
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Before swapping : a = "<<a<<" b = "<<b<<endl;
    cout<<"Before swapping : &a = "<<&a<<" &b = "<<&b<<endl;
    swap(&a, &b);
    cout<<"After swapping : a = "<<a<<" b = "<<b<<endl;
    cout<<"After swapping : &a = "<<&a<<" &b = "<<&b<<endl;
    return 0;
}