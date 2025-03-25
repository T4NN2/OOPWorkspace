#include <iostream>
using namespace std;

int* readNumbers(); // Function declaration
bool equalsArray(int *numbers1, int *numbers2, int length); // Function declaration
void printNumbers(int* numbers, int length); // Function declaration

int main() {
int *arr1 = readNumbers(); // Call readNumbers to get the first array
int *arr2 = readNumbers(); // Call readNumbers to get the second array
bool result = equalsArray(arr1, arr2, 10); // Compare the two arrays
std::cout << std::boolalpha << result << std::endl; // Display the result as true or false
delete[] arr1; // Delete the first dynamically allocated array
delete[] arr2; // Delete the second dynamically allocated array

    return 0;
}
