#include<iostream>

using namespace std;

void reverse(int arr[], int idx, int n){
    if (idx >= n / 2) return;
    int temp = arr[idx];
    arr[idx] = arr[n - idx - 1];
    arr[n - idx - 1] = temp;
    reverse(arr, idx + 1, n);
}

int main() {
    int arr[] = {0,2,4,6,8};
    for (int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(arr, 0,5);
    for (int i : arr){
        cout<<i<<" ";
    }
    return 0;
}