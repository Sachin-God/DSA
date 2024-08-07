// wheather c/ C++ arrays can only be passed as an pointers

#include<iostream>

using namespace std;

void print(int arr[],int n){  // print(int arr[]) will give an error if we not pass n and instead do sizeof(arr) / sizeof(arr[0]) bcz arrays are passed as pointer and we cannot use sizeof for pointers
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}
int main() {
    int arr[5]= {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr,n);
    return 0;
}