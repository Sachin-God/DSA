// also called modular programming

#include<iostream>
#include<vector>

using namespace std;
// Modular / procedural programmming is type of programming where we divide or code into smaller part to increase its reusability

int sum(vector<int> arr){ // vector<int> arr is formal Parameter
    int sum1 = 0;
    for (int i = 0; i < arr.size(); i++){
        sum1 += arr[i];
    }
    return sum1;
}
int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<int> arr2 = {6,7,8,9,10};
 
    int sum1 = sum(arr); // arr passed here is Actual Parameter
    int sum2 = sum(arr2); // arr2 passed here is Actual Parameter
    cout<<sum1<<" & "<<sum2<<endl;
    return 0;
}