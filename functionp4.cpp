#include <iostream>
using namespace std;

double arrayMax(double* arr, int n) {
    double max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
