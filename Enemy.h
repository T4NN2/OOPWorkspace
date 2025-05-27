#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"
#include <string>

class Enemy : public Character {
private:
    int difficulty;
    std::string type;

public:
    Enemy();
    Enemy(const std::string& name, int health, int attack, int defense, int speed, int difficulty, const std::string& type);

    int getDifficulty() const;
    std::string getType() const;

    int decideAction(); // Returns an integer representing the chosen action
};

#endif // ENEMY_H
