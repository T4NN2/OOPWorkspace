#include <iostream>
#include "functionp7.cpp"
#include <iostream>

int main() {
    int size = 5; // Example size
    double value = 3.14; // Example initial value
    double* array = dynamicArray(size, value); // Call the dynamicArray function

    // Print the elements of the array
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array; // Clean up the allocated memory
}
