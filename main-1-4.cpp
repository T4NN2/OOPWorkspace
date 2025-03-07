#include <iostream>

extern int sum_two_arrays(int array[], int secondarry[], int n);

int main() {
    int array[3] = {1, 2, 3};
    int secondarray[3] = {4, 5, 6}; 
    std::cout << "The sum of two arrays is: " << sum_two_arrays(array, secondarray, 3) << std::endl;
    return 0;
}