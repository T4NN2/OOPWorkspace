#include <iostream>

int count_evens(int number) {
    int even_count = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            even_count++;
        }
    }
    return even_count;
}
