// C++ program to convert a decimal
// number to binary number
#include <iostream>
using namespace std;
 
// Function to convert decimal
// to binary
void decToBinary(int n) {
    // Array to store binary number
    int binaryNum[100];
 
    // counter
    int i = 0;
    
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
}
// driver code

int main() {
    int n = 75;
    decToBinary(n);
    return 0;
}