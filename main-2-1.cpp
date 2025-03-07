#include <iostream>
 
extern int min_element(int array[], int n);

int main() {
    int array[8] = {8, 2, 3, 5, 7, 6, 8, 21};
    std::cout << "The minimum number in this array is: " <<min_element(array, 8) << std::endl;
    return 0;
}