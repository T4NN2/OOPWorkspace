#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <cmath>
#include <random>

class Utils {
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<> disW(0, gridWidth - 1);
        std::uniform_int_distribution<> disH(0, gridHeight - 1);
        return {disW(gen), disH(gen)};
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        int x1 = std::get<0>(pos1), y1 = std::get<1>(pos1);
        int x2 = std::get<0>(pos2), y2 = std::get<1>(pos2);
        return std::sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    }
};

#endif
