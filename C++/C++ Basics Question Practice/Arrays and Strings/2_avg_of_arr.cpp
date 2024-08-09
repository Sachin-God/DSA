#include<iostream>

int main() {
    int arr[5] = {1,2,5,2,4};

    int len = sizeof(arr) / sizeof(arr[0]);
    float count = 0;
    for (int i = 0; i < len; i++){
        count += arr[i];
    }
    std::cout<<"Sum of Array is "<<count/len<<std::endl;
    return 0;
}