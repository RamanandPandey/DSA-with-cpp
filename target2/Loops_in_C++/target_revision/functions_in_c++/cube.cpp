#include <iostream>
#include <cmath>

int main() {
    double number;

    // Input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Calculate the cube root using std::pow function
    double cubeRoot = std::pow(number, 1.0 / 3.0);

    // Output the result
    std::cout << "The cube root of " << number << " is: " << cubeRoot << std::endl;

    return 0;
}
