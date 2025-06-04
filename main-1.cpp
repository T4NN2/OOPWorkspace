#include <iostream>
#include "Utils.h"

int main() {
    auto pos1 = Utils::generateRandomPos(10, 10);
    auto pos2 = Utils::generateRandomPos(10, 10);

    std::cout << "Pos1: (" << pos1.first << ", " << pos1.second << ")\n";
    std::cout << "Pos2: (" << pos2.first << ", " << pos2.second << ")\n";

    std::cout << "Distance: " << Utils::calculateDistance(pos1, pos2) << "\n";

    return 0;
}
