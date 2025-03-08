#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array[3] = {6, 5, 8};

    std::cout << "Array is descending: " << (is_descending(array, 3) ? "true" : "false") << std::endl;
    return 0;
}