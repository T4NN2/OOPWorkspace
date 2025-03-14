#include <iostream>
#include <string>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0; // Initialize result variable
    for (int i = 0; i < number_of_digits; i++) {
        result += binary_digits[i] * (1 << (number_of_digits - 1 - i)); // Calculate integer value
    }
    return result; // Return the final integer value


}
