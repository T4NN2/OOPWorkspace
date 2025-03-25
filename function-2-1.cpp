#include <iostream>

int *readNumbers() {
    int *numbers = new int[10]; // Allocate an array of 10 integers
    int count = 0; // Initialize count for the number of inputs
    while (count < 10 && std::cin >> numbers[count]) { // Read integers until 10 or EOF
        count++;
    }
    return numbers; // Return the pointer to the array
}

void hexDigits(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        char hexDigit;
        switch (numbers[i]) {
            case 0: hexDigit = '0'; break;
            case 1: hexDigit = '1'; break;
            case 2: hexDigit = '2'; break;
            case 3: hexDigit = '3'; break;
            case 4: hexDigit = '4'; break;
            case 5: hexDigit = '5'; break;
            case 6: hexDigit = '6'; break;
            case 7: hexDigit = '7'; break;
            case 8: hexDigit = '8'; break;
            case 9: hexDigit = '9'; break;
            case 10: hexDigit = 'A'; break;
            case 11: hexDigit = 'B'; break;
            case 12: hexDigit = 'C'; break;
            case 13: hexDigit = 'D'; break;
            case 14: hexDigit = 'E'; break;
            case 15: hexDigit = 'F'; break;
        }
        std::cout << i << " " << numbers[i] << " " << hexDigit << std::endl;
    }
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl; // Print index and number
    }
}
