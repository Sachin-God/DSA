#include<iostream>
using namespace std;

static int p = 1, f = 1;
int e(int a, int n){
    if (n == 0) return 1;
    int r = e(a, n-1);
    p *= a;
    f *= n;
    return r + p/f; 
}

int main() {

    return 0;
}