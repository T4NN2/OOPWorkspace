#include <iostream>

extern void two_five_nine(int array[], int n, int &count_twos, int &count_fives, int &count_nines);

int main() {
    int array[7] = {2, 4, 5, 7, 9, 9, 2};
    int count_twos, count_fives, count_nines;
    two_five_nine(array, 7, count_twos, count_fives, count_nines);
    std::cout << "2:" << count_twos << ";5:" << count_fives << ";9:" << count_nines << ";" << std::endl;
    return 0;
}
