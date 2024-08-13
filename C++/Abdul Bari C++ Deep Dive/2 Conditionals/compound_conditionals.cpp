#include <iostream>

int main() {
    int age = 25;
    bool hasID = true;
    bool isMember = false;

    // Compound conditional statement using AND (&&) and OR (||)
    if ((age >= 18 && hasID) || isMember) {
        std::cout << "Access granted." << std::endl;
    } else {
        std::cout << "Access denied." << std::endl;
    }

    return 0;
}
