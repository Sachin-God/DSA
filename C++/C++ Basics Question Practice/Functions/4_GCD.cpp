#include<iostream>
using namespace std;

void gcd(int a, int b){
    if (a == 0 || b == 0){
        cout<<"either of one is a Zero. Check the inputs"<<endl;
    }
    int res = 1;
    int x = min(a, b);
    int y = max(a, b);
    for (int i = 1; i <= x; i++){
        if (y % i == 0){
            res = i;
        }
    }
    cout<<res<<endl;
}

int main() {
    int a, b;
    cout<<"Enter the number1 : ";
    cin>>a;
    cout<<"Enter the number2 : ";
    cin>>b;
    gcd(a, b);
    return 0;
}