#include<iostream>

using namespace std;

int main() {
    // it will initialize places to zero if we were not place anything at vacant place
    int arr[5] = {1,2,3};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}