#include<iostream>

int main() {
    int arr[5] = {1,2,3,4,5};

    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len / 2; i++){
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
    std::cout<<"Reverse of Array is "<<std::endl;
    for (int i = 0; i < len; i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}