#include<iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++){
        bool check = true;
        for (int j = 0; j < 9; j++){
            if (j >= 4 - i && j < 5 + i){
                if (check){
                    cout<<'*';
                } else {
                    cout<<' ';
                }
                check = !check;
            } else {
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}