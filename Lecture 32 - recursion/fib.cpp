#include <iostream>

void printFibonacci(int n) {
    static int a = 0, b = 1; // Initialize static variables
    static bool isFirst = true; // Flag to handle the first call

    if (isFirst && n>=2) {
        isFirst = false; // Set the flag to false after the first call
        std::cout << a << " " << b << " "; // Print the first two terms
    }

    if (n == 1 && isFirst) {
        std::cout << a << std::endl; // Print the first term (0)
        return; // Exit the function
    }

    if (n > 2) {
        int c = a + b; // Calculate the next term
        std::cout << c << " "; // Print the current term
        a = b; // Update the values for the next recursion
        b = c;
        printFibonacci(n - 1); // Recursive call with n-1
    }
}

int main() {
    int n;
    std::cout << "Enter the number of Fibonacci terms to print: ";
    std::cin >> n;

    std::cout << "Fibonacci series: ";
    printFibonacci(n); // Call the function with the user's input

    return 0;
}