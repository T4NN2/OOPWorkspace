#include <iostream>
#include <string>

// Function to add two binary numbers
std::string addBinary(const std::string &a, const std::string &b) {
    std::string result;
    int carry = 0;
    int maxLength = std::max(a.length(), b.length());

    // Pad the shorter string with leading zeros
    std::string aPadded = std::string(maxLength - a.length(), '0') + a;
    std::string bPadded = std::string(maxLength - b.length(), '0') + b;

    // Perform binary addition
    for (int i = maxLength - 1; i >= 0; --i) {
        int sum = (aPadded[i] - '0') + (bPadded[i] - '0') + carry;
        result = char((sum % 2) + '0') + result; // Append the result
        carry = sum / 2; // Calculate carry
    }
    if (carry) {
        result = '1' + result; // Append carry if exists
    }
    return result;
}

int main() {
    // Dedicated binary numbers
    std::string binary1 = "111011101011"; // First binary number
    std::string binary2 = "111011011";    // Second binary number

    // Perform addition
    std::string sum = addBinary(binary1, binary2);
    
    // Output the result
    std::cout << "Binary 1: " << binary1 << std::endl;
    std::cout << "Binary 2: " << binary2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}