#include <iostream>

int count(int array[], int n) {
    int counter = 0; // Initialize counter for even numbers
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) { // Check if the number is even
            counter++; // Increment counter if even
        }
    }
    return counter; // Return the total count of even numbers
}
