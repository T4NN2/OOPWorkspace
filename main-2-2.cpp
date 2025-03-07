#include <iostream>

extern int max_element(int array[], int n);

int main() {
    int array[5] = {1, 3, 5, 21, 34};
    std::cout << "The maximum number in this array is: " <<max_element(array, 5) <<std::endl;
    return 0;
}