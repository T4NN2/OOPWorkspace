#include <iostream>
using namespace std;

double* dynamicArray(int n, double m) {
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        arr[i] = m;
    }
    return arr; // Return the dynamically allocated array
}
