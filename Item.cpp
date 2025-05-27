#include "Item.h"
#include <iostream>

Item::Item()
    : itemType("Unknown"), effectAmount(0) {}

Item::Item(const std::string& type, int effect)
    : itemType(type), effectAmount(effect) {}

std::string Item::getItemType() const {
    return itemType;
}

int Item::getEffectAmount() const {
    return effectAmount;
}

void Item::applyEffect(Character& target) const {
    if (itemType == "healing") {
        int newHealth = target.getHealth() + effectAmount;
        target.setHealth(newHealth);
        std::cout << target.getName() << " healed for " << effectAmount << " points." << std::endl;
    }
    else if (itemType == "buff_attack") {
        int newAttack = target.getAttack() + effectAmount;
        target.setAttack(newAttack);
        std::cout << target.getName() << "'s attack increased by " << effectAmount << "." << std::endl;
    }
    else {
        std::cout << "Item effect not recognized." << std::endl;
    }
}
