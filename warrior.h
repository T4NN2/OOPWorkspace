#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"

class Warrior : public Player {
private:
    string weapon;

public:
    Warrior(string name, int health, int damage, string weapon);

    void swingWeapon(Player* opponent);

    string getWeapon() const;
    void setWeapon(const string& newWeapon);
};

#endif
