#include <iostream>

extern int array_sum(int array[], int n);

int main() {
    int array[5] = {2, 4, 6, 8, 10};
    std::cout <<"The total of all elements in the array is: " << array_sum(array, 5) << std::endl;
    return 0;
}