#include<iostream>

using namespace std;

int main() {
    int i,j,k,l;
    i = 1;
    j = 1;
    k = 1;
    l = 1;
    cout<<"prefix increment of "<<i<<" is "<<++i<<endl; // 2
    cout<<"post increment of "<<j<<" is "<<j++<<endl; // 1
    cout<<"prefix decrement of "<<k<<" is "<<--k<<endl; // 0
    cout<<"post decrement of "<<l<<" is "<<l--<<endl; // 1
    return 0;
}