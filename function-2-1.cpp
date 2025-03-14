#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    int decimal_value = std::stoi(decimal_number);
    std::string binary_str = "";

    if (decimal_value == 0) {
        binary_str = "0";
    } else {
        while (decimal_value > 0) {
            binary_str = std::to_string(decimal_value % 2) + binary_str;
            decimal_value /= 2;
        }
    }

    std::cout << binary_str << std::endl;
}
