#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

class Inventory {
private:
    std::vector<Item> items;

public:
    Inventory();

    void addItem(const Item& item);
    void removeItem(int index);
    void showInventory() const;
    int getItemCount() const;
    const Item& getItem(int index) const;
};

#endif // INVENTORY_H
