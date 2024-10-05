#include<iostream>
#include"Array.h"

using namespace std;

int missing(Array arr){
    int first, last;
    first = arr.get(0);
    last = arr.get(arr.getLength() - 1);
    int a, b, c = 0;
    a = (last * (last + 1)) / 2;
    b = (first * (first - 1)) / 2;

    for (int i = 0; i < arr.getLength(); i++){
        c += arr.get(i);
    }

    return a - b - c;
}

int main() {

    return 0;
}