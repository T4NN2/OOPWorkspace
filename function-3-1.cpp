#include <iostream>

bool is_fanarray(int array[], int n) {
    // Check if the size is less than 1
    if (n < 1) {
        return false;
    }

    // Check for ascending order in the first half
    for (int i = 0; i < n / 2; i++) {
        if (array[i] >= array[i + 1]) {
            return false;
        }
    }

    // Check for palindrome
    for (int i = 0; i < n / 2; i++) {
        if (array[i] != array[n - 1 - i]) {
            return false;
        }
    }

    return true;
}
