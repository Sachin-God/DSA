#include<iostream>
using namespace std;

int add(int x, int y, int z = 0){
    return x + y + z;
}

int main() {
    cout<<add(5,4)<<endl;
    cout<<add(5,4,7)<<endl;
    return 0;
}