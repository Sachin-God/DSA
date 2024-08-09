#include<iostream>

int main() {
    int arr[5] = {1,2,3,4,5};

    int len = sizeof(arr) / sizeof(arr[0]);

    int l, s;
    l = 0;
    s = 0;
    for (int i = 0; i < len; i++){
        if (l < arr[i]) {
            s = std::max(l,s);
            l = arr[i];
        } else {
            s = std::max(s,arr[i]);
        }
    }
    std::cout<<"Second largest of Array is "<<s<<std::endl;
    return 0;
}