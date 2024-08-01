#include<iostream>

int main() {
    int arr[5] = {1,2,3,6,5};

    int len = sizeof(arr) / sizeof(arr[0]);

    bool sorted = true;
    for (int i = 1; i < len; i++){
        if (arr[i-1] > arr[i]) {
            sorted = false;
        }
    }
    if (sorted) {
        std::cout<<"Sorted Array"<<std::endl;
    } else {
        std::cout<<"Unsorted Array"<<std::endl;
    }
    return 0;
}