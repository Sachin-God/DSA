#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr;
    int x;
    while (x != 0)
    {
        cout<<"Enter x : ";
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Vector Values : ";
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}