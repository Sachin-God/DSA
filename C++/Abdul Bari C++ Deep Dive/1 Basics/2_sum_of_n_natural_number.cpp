#include<iostream>

using namespace std;

int main() {
    float n;

    cout<<"Enter n : ";
    cin>>n;

    float ans = n * ( n + 1) / 2;
    cout<<"Sum of First N natural Number is "<<ans;
    return 0;
}