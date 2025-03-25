#include <iostream>

int *readNumbers() {
    int *numbers = new int[10]; // Allocate an array of 10 integers
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i]; // Read 10 integers from standard input
    }
    return numbers; // Return the pointer to the array
}

bool equalsArray(int *numbers1, int *numbers2, int length) {
    if (length < 1) return false; // Check if length is less than 1
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false; // Return false if any elements are not equal
        }
    }
    return true; // Return true if all elements are equal
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl; // Print index and number
    }
}
