#include <iostream>
#include "functionp4.cpp"
using namespace std;

int main() {
    double tsarr[5] = {1.1, 3.1, 4.1, 5.2, 2.2}; // Correctly initialize with five elements
    double maxVal = arrayMax(tsarr, 5);
    cout << "Maximum value: " << maxVal << endl; // Print the result
}
