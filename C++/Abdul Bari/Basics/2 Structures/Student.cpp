#include<iostream>

using namespace std;

struct Student {
    char name[15];
    int age;
};

int main() {
    struct Student s[2] = {{"Sachin", 20}, {"Riya",18}};

    for (int i = 0; i < 2; i++){
        cout<<"Name of Student "<<i+1<<" is "<<s[i].name<<endl;
        cout<<"Age of Student "<<i+1<<" is "<<s[i].age<<endl;
    }

    return 0;
}