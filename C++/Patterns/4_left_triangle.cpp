#include<iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++){
        int k = 4 - i;
        for (int j = 0; j < 5; j++){
            if (j >= k){
                cout<<'*';
            } else {
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}