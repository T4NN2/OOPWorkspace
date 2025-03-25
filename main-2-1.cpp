#include <iostream>
#include "function-2-1.cpp" // Include the new function file

using namespace std;

int main() {
    int *arr = readNumbers(); // Call readNumbers to get the array
    hexDigits(arr, 10); // Pass the array to hexDigits
    delete[] arr; // Delete the dynamically allocated array
    return 0;
}
