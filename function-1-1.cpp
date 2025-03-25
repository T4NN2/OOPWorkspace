#include <iostream>

int *readNumbers() {
    int *numbers = new int[10]; // Allocate an array of 10 integers
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i]; // Read 10 integers from standard input
    }
    return numbers; // Return the pointer to the array
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl; // Print index and number
    }
}
