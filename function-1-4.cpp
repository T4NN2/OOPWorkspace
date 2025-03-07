#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {
    int two_array_sum = 0;
    for (int i = 0; i < n; i++) {
        two_array_sum += array[i] + secondarray[i];
        }
        return two_array_sum;
    }