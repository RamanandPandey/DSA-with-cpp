#include <iostream>

int main() {
    int n = 4; // Number of rows in the pattern

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            std::cout << "   ";
        }

        // Print the first number
        std::cout << i;

        // Print spaces in between
        for (int j = 1; j <= 2 * (i - 1) - 1; ++j) {
            std::cout << "   ";
        }

        // Print the second number (if not the first row)
        if (i > 1) {
            std::cout << i;
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
