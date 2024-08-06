#include<iostream>
#include<vector>

using namespace std;
// Monolithic programmming is type of programming in which a main function contains all the logic
int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<int> arr2 = {6,7,8,9,10};

    // finding sum of vector 1
    int sum1 = 0;
    for (int i = 0; i < arr.size(); i++){
        sum1 += arr[i];
    }

    // now we have to write the same logic as vector 1 for finding the sum of vector 2
    int sum2 = 0;
    for (int i = 0; i < arr2.size(); i++){
        sum2 += arr2[i];
    }


    // we can avoid this redundancy using moduler / procedural programming
    cout<<sum1<<" & "<<sum2<<endl;
    return 0;
}