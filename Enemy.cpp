#include "Enemy.h"
#include <cstdlib> // for rand()
#include <ctime>

Enemy::Enemy()
    : Character(), difficulty(1), type("Unknown") {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed random generator
}

Enemy::Enemy(const std::string& name, int health, int attack, int defense, int speed, int difficulty, const std::string& type)
    : Character(name, health, attack, defense, speed), difficulty(difficulty), type(type) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

int Enemy::getDifficulty() const {
    return difficulty;
}

std::string Enemy::getType() const {
    return type;
}

int Enemy::decideAction() {
    // Simple AI: randomly choose action 1 (attack) or 2 (defend)
    return (std::rand() % 2) + 1;
}
