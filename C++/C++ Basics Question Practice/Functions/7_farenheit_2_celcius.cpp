#include<iostream>
using namespace std;

int main() {
    int f;
    cout<<"Enter the farenheits : ";
    cin>>f;
    auto cel = (f-32)*5/9;
    cout<<f<<" farenheit"<<" is "<<cel<<endl;
    return 0;
}