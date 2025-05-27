#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "Character.h"

class Arena {
private:
    int roundNumber;
    std::vector<Character*> combatants;

public:
    Arena();

    void addCombatant(Character* combatant);
    void runBattle();
    void displayStatus() const;
};

#endif // ARENA_H
