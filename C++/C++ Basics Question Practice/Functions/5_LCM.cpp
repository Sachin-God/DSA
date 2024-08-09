#include<iostream>
using namespace std;

void lcm(int a, int b){
    if (a == 0 || b == 0){
        cout<<"either of one is a Zero. Check the inputs"<<endl;
    }
    int res = 1;
    int y = max(a, b);
    while (true){
        if (y % a == 0 && y % b == 0){
            res = y;
            break;
        }
        y += 1;
    }
    cout<<res<<endl;
}

int main() {
    int a, b;
    cout<<"Enter the number1 : ";
    cin>>a;
    cout<<"Enter the number2 : ";
    cin>>b;
    lcm(a, b);
    return 0;
}