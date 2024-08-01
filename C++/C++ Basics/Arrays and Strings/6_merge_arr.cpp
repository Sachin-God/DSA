#include<iostream>

int main() {
    int arr1[5] = {1,2,3,4,5};
    int arr2[2] = {6,7};

    int l1 = sizeof(arr1) / sizeof(arr1[0]);
    int l2 = sizeof(arr2) / sizeof(arr2[0]);
    int len = l1 + l2;

    int arr[len];
    for (int i = 0; i < len; i++){
        if (i < l1){
            arr[i] = arr1[i];
        } else {
            arr[i] = arr2[i - l1];
        }
    }

    for (int i = 0; i < len; i++){
        std::cout<<arr[i] << std::endl;
    }
    return 0;
}