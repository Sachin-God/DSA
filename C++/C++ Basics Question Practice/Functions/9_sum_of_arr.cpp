#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int m = arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++){
        m += arr[i];
    }
    cout<<"Sum of the array is "<<m<<endl;
    return 0;
}