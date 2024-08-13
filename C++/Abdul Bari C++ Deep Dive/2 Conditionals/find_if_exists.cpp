#include<iostream>
using namespace std;

bool find(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return true;  // Return true if target is found
        }
    }
    return false;  // Return false if target is not found after checking all elements
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int x;
    cin>>x;
    if (find(arr,5,x)){
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
    return 0;
}