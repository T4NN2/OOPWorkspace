#include <iostream>
#include "function-1-1.cpp"
using namespace std;

int main() {
    int *arr = readNumbers(); // Call readNumbers to get the array
    printNumbers(arr, 10); // Pass the array to printNumbers
    delete[] arr; // Delete the dynamically allocated array
    return 0;
}
