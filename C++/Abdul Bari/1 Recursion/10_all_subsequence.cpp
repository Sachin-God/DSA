#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> arr) {
    for (int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void subsequence(int arr[], int idx, int size){
    static vector<int> vec;
    if (idx >= size) {
        print(vec);
        return;
    }
    vec.push_back(arr[idx]);
    subsequence(arr, idx+1, size);
    vec.pop_back();
    subsequence(arr, idx+1, size);
}

int main() {
    int arr[3] = {3,1,2};
    subsequence(arr, 0, 3);
    return 0;
}