#include <iostream>

int main() {
    float height, base;

    std::cout << "Enter the height of the Triangle: ";
    std::cin >> height;

    std::cout << "Enter the base of the Triangle: ";
    std::cin >> base;

    // Correct calculation
    float correct = (height * base) / 2;

    // Incorrect calculation (integer division causes the error)
    float incorrect = (1 / 2) * height * base;  // This will be zero

    std::cout << "Answer with correct precedence is: " << correct << std::endl;
    std::cout << "Answer with wrong precedence is: " << incorrect << std::endl;

    return 0;
}
