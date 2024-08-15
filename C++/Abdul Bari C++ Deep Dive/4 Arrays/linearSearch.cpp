#include<iostream>
using namespace std;

int main() {
    int arr[20] = {35, 98, 98, 100, 117, 202, 215, 278, 281, 415, 420, 532, 685, 707, 868, 896, 905, 926, 936, 947};
    int target;
    cout<<"Enter the number : ";
    cin>>target;
    for (int x : arr){
        if (x == target){
            cout<<"Found"<<endl;
            return 0;
        }
    }
    cout<<"not Found"<<endl;
    return 1;
}