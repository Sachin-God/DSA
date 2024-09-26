#include<iostream>
#include<cmath>

using namespace std;

int prime(int n){
    if (n == 0 || n == 1){
        return false;
    }
    int power = static_cast<int>(pow(n, 0.5));
    for (int i = 2; i <= power; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The number is " << (prime(n) ? "prime" : "not prime") << endl;
    
    return 0;
}