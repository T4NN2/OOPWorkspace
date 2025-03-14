#include <iostream>
#include <string>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary1[] = {1, 0, 1, 1}; // 11 in decimal
    int size1 = sizeof(binary1) / sizeof(binary1[0]);
    std::cout << "Binary 1011 to integer: " << binary_to_int(binary1, size1) << std::endl;

    int binary2[] = {1, 1, 1, 1, 1}; // 31 in decimal
    int size2 = sizeof(binary2) / sizeof(binary2[0]);
    std::cout << "Binary 11111 to integer: " << binary_to_int(binary2, size2) << std::endl;

    int binary3[] = {0, 0, 0, 1}; // 1 in decimal
    int size3 = sizeof(binary3) / sizeof(binary3[0]);
    std::cout << "Binary 0001 to integer: " << binary_to_int(binary3, size3) << std::endl;

    return 0;
}
