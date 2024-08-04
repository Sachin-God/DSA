#include<iostream>

using namespace std;

int main() {
    int *p;
    int a[5] = {1,2,3,4,5};
    p = a; // for an array we don't need to give or use ampercent operator
    // alternate of this is
    p = &a[0];
    for(int i =0; i < 5; i++){
        cout<<*p<<endl;
        p += 1;
    }

    return 0;
}