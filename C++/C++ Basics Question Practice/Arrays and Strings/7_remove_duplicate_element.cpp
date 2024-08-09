#include<iostream>

int main() {
    int arr[7] = {1,2,2,3,3,4,5};

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len - 1; i++){
        for (int j = i+1; j < len; j++){
            if (arr[i] == arr[j]){
                arr[j] = 0;
            }
        }
    }
    // 0 represent removed
    for (int i = 0; i < len; i++){
        std::cout<<arr[i] << std::endl;
    }
    return 0;
}