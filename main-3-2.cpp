#include <iostream>

extern int median_array(int array[], int n);

int main() {
    int median;
    int array[5] = {3, 2, 1, 5, 4};
    std::cout << "Sorted array: " << median_array(array, 5) << std::endl;

    // output the median?
    std::cout << "The median: " << median << std::endl;
    return 0;
}