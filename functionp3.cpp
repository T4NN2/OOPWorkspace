#include <iostream>

void printArray(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " "; // Print each element of the array
    }
    std::cout << std::endl; // Print a new line at the end
}
