#ifndef WORKSHOP_H
#define WORKSHOP_H

#include <iostream>

// Function implementations from Part 2
void changeValue(double* value) {
    *value = 42;
}

// Function implementations from Part 3
void printArray(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " "; // Print each element of the array
    }
    std::cout << std::endl; // Print a new line at the end
}

// Function implementations from Part 4
double arrayMax(double* arr, int n) {
    double max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function implementations from Part 7
double* dynamicArray(int n, double m) {
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        arr[i] = m;
    }
    return arr; // Return the dynamically allocated array
}

#endif // WORKSHOP_H
