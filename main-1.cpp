#include <iostream>
#include "Utils.h"

int main() {
    auto pos1 = Utils::generateRandomPos(10, 10);
    auto pos2 = Utils::generateRandomPos(10, 10);

    std::cout << "Pos1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Pos2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    std::cout << "Distance: " << Utils::calculateDistance(pos1, pos2) << "\n";

    return 0;
}
