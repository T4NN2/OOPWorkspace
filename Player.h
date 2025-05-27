#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Inventory.h"
#include <string>

class Player : public Character {
private:
    int level;
    int experience;
    Inventory inventory;

public:
    Player();
    Player(const std::string& name, int health, int attack, int defense, int speed);

    int getLevel() const;
    int getExperience() const;
    Inventory& getInventory();

    void levelUp();
    void gainExperience(int amount);
    void useItem(int itemIndex);
    int selectAction();
};

#endif // PLAYER_H
