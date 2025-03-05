#include <iostream>

extern double array_mean(int array[], int n);

int main() {
    int array[3] = {2, 4, 6};
    std::cout <<"The mean of all elements in the array is: " << array_mean(array, 3) std::endlad;
    return 0;
}