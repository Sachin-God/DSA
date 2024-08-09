#include<iostream>
using namespace std;

int pow(int n, int x) {
    if (x == 0){
        return 1;
    }
    
    int res = n;
    for (int i = 1; i < x; i++){
        res *= n;
    }
    return res;
}

int main() {
    int n, x;
    cout<<"Enter the number1 : ";
    cin>> n;
    cout<<"Enter the number2 : ";
    cin>> x;
    cout<<pow(n,x)<<endl;
    return 0;
}