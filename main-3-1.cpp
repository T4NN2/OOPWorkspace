#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {1, 2, 3, 2, 1};
    std::cout << "Array is a fanarray: " << (is_fanarray(array, 5) ? "true" : "false") << std::endl;
    return 0;
}