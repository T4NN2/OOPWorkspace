#ifndef UTILS_H
#define UTILS_H

#include <utility>
#include <cmath>
#include <random>

class Utils {
public:
    static std::pair<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<> disW(0, gridWidth - 1);
        std::uniform_int_distribution<> disH(0, gridHeight - 1);
        return {disW(gen), disH(gen)};
    }

    static double calculateDistance(std::pair<int, int> pos1, std::pair<int, int> pos2) {
        int x1 = pos1.first, y1 = pos1.second;
        int x2 = pos2.first, y2 = pos2.second;
        return std::sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    }
};

#endif
