#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {}

void Inventory::addItem(const Item& item) {
    items.push_back(item);
    std::cout << "Added item: " << item.getItemType() << std::endl;
}

void Inventory::removeItem(int index) {
    if (index < 0 || index >= static_cast<int>(items.size())) {
        std::cout << "Invalid item index." << std::endl;
        return;
    }
    std::cout << "Removed item: " << items[index].getItemType() << std::endl;
    items.erase(items.begin() + index);
}

void Inventory::showInventory() const {
    std::cout << "Inventory:" << std::endl;
    if (items.empty()) {
        std::cout << "  (empty)" << std::endl;
        return;
    }
    for (size_t i = 0; i < items.size(); ++i) {
        std::cout << "  " << i << ": " << items[i].getItemType() << " (Effect: " << items[i].getEffectAmount() << ")" << std::endl;
    }
}

int Inventory::getItemCount() const {
    return static_cast<int>(items.size());
}

const Item& Inventory::getItem(int index) const {
    if (index < 0 || index >= static_cast<int>(items.size())) {
        throw std::out_of_range("Invalid item index");
    }
    return items[index];
}
