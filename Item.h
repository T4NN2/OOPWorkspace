#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "Character.h"

class Item {
private:
    std::string itemType;
    int effectAmount;

public:
    Item();
    Item(const std::string& type, int effect);

    std::string getItemType() const;
    int getEffectAmount() const;

    void applyEffect(Character& target) const;
};

#endif // ITEM_H
