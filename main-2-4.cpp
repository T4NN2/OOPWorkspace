#include <iostream>

extern bool is_ascending(int array[], int n);
int main() {
    int array[2] = {1, 2};
    
    std::cout << "Array is ascending: " << (is_ascending(array, 2) ? "true" : "false") << std::endl;

    return 0;
}
