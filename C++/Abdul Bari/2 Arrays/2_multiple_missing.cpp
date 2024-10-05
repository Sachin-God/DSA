#include<iostream>
#include"Array.h"

using namespace std;

void missing(Array arr){
    int diff = arr.get(0);
    int balance = 0, new_diff;
    for (int i = 0; i < arr.getLength(); i++){
        new_diff = arr.get(i) - i;
        if (new_diff != diff){
            balance = new_diff - diff;
            int j = 1;
            while (balance > 0){
                cout<<arr.get(i-1) + j++<<endl;
                balance--;
            }
            diff = new_diff;
        }
    }
}

int main() {
    Array arr(8);
    arr.Append(6);
    arr.Append(7);
    arr.Append(8);
    arr.Append(9);
    arr.Append(11);
    arr.Append(12);
    arr.Append(15);
    missing(arr);
    return 0;
}