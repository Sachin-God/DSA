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
    for (int i = 0; i < 4; i++){
        int temp = i;
        for (int j = 0; j < 5; j++){
            if (temp < 0) {
                cout<<'*';
            } else{
                cout<<" ";
            }
            temp -= 1;
        }
        cout<<endl;
    }
    return 0;
}