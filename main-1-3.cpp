#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int array[6] = {9, 11, 9, 11, 9, 5};
    std::cout << "The number of elements in the array is: " << num_count(array, 6, 9) << std::endl;
    return 0;
}
