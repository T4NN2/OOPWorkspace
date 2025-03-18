#include <iostream>
#include "workshop.h"

int main() {
    // Test Part 2: changeValue
    double value = 0;
    changeValue(&value);
    std::cout << "Value after changeValue: " << value << std::endl;

    // Test Part 3: printArray
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Array elements: ";
    printArray(arr, n);

    // Test Part 4: arrayMax
    double max = arrayMax(arr, n);
    std::cout << "Maximum value in array: " << max << std::endl;

    // Test Part 7: dynamicArray
    double* dynamicArr = dynamicArray(5, 3.5);
    std::cout << "Dynamic array elements: ";
    printArray(dynamicArr, 5);

    // Clean up dynamically allocated memory
    delete[] dynamicArr;

    return 0;
}
