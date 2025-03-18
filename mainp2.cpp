#include <iostream>
#include "functionp2.cpp"

int main() {
    double myValue = 0; // Initial value
    std::cout << "Before change: " << myValue << std::endl;
    changeValue(&myValue); // Call the function
    std::cout << "After change: " << myValue << std::endl; // Verify the change
    return 0;
}
