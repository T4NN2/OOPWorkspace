#include "Arena.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

Arena::Arena() : roundNumber(1) {}

void Arena::addCombatant(Character* combatant) {
    combatants.push_back(combatant);
}

void Arena::displayStatus() const {
    std::cout << "Round " << roundNumber << " Status:" << std::endl;
    for (const auto& c : combatants) {
        std::cout << c->getName() << " - Health: " << c->getHealth() << std::endl;
    }
}

void Arena::runBattle() {
    std::cout << "Battle started!" << std::endl;
    while (true) {
        displayStatus();

        for (auto& attacker : combatants) {
            if (!attacker->isAlive()) continue;

            // Find a target that is alive and not the attacker
            Character* target = nullptr;
            for (auto& c : combatants) {
                if (c != attacker && c->isAlive()) {
                    target = c;
                    break;
                }
            }
            if (!target) {
                std::cout << attacker->getName() << " wins the battle!" << std::endl;
                return;
            }

            // Check if attacker is Player to allow action selection
            Player* playerPtr = dynamic_cast<Player*>(attacker);
            if (playerPtr) {
                int action = playerPtr->selectAction();
                if (action == 1) { // Attack
                    playerPtr->attackTarget(*target);
                } else if (action == 2) { // Use Item
                    playerPtr->getInventory().showInventory();
                    std::cout << "Select item index to use (or -1 to cancel): ";
                    int itemIndex;
                    std::cin >> itemIndex;
                    if (itemIndex == -1) {
                        std::cout << "Item use cancelled." << std::endl;
                    } else {
                        playerPtr->useItem(itemIndex);
                    }
                } else if (action == 3) { // Defend
                    std::cout << playerPtr->getName() << " is defending this turn." << std::endl;
                    playerPtr->setDefending(true);
                }
            } else {
                // Enemy AI action
                Enemy* enemyPtr = dynamic_cast<Enemy*>(attacker);
                if (enemyPtr) {
                    int action = enemyPtr->decideAction();
                    if (action == 1) { // Attack
                        enemyPtr->attackTarget(*target);
                    } else {
                        std::cout << enemyPtr->getName() << " defends this turn." << std::endl;
                    }
                } else {
                    // Default attack for other characters
                    attacker->attackTarget(*target);
                }
            }

            // Check if battle ended
            int aliveCount = 0;
            for (auto& c : combatants) {
                if (c->isAlive()) aliveCount++;
            }
            if (aliveCount <= 1) {
                std::cout << "Battle ended." << std::endl;
                return;
            }
        }
        roundNumber++;
    }
}
