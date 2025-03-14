#include <iostream>

extern int sum_diagonal(int array[4][4]);

int array[4][4] = {{1, 2, 3, 4}, 
                    {5, 6, 7, 8}, 
                    {9, 10, 11, 12}, 
                    {13, 14, 15, 16}};

int main() {
    std::cout << "The diagonal sum: " << (sum_diagonal(array)) << std::endl;
    return 0;
}
