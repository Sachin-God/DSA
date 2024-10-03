#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> arr) {
    for (int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void subsequence(int arr[], int idx, int size, int target){
    static vector<int> vec;
    static int total;
    if (idx >= size) {
        if (total == target){
            print(vec);
        }
        return;
    }
    vec.push_back(arr[idx]);
    total += arr[idx];
    subsequence(arr, idx+1, size, target);
    vec.pop_back();
    total -= arr[idx];
    subsequence(arr, idx+1, size, target);
}

int main() {
    int arr[3] = {3,1,2};
    subsequence(arr, 0, 3,3);
    return 0;
}