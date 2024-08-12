#include<iostream>

using namespace std;

enum week {Monday, tuesday, wednesday, thursday, friday, saturday, sunday};
int main() {
    week day;
    day = Monday;
    cout<<day<<endl; // 0 i.e. its index
    day = wednesday;
    cout<<day<<endl; // 2
    return 0;
}