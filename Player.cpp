#include "Player.h"
#include <iostream>

Player::Player()
    : Character(), level(1), experience(0), inventory() {}

Player::Player(const std::string& name, int health, int attack, int defense, int speed)
    : Character(name, health, attack, defense, speed), level(1), experience(0), inventory() {}

int Player::getLevel() const {
    return level;
}

int Player::getExperience() const {
    return experience;
}

Inventory& Player::getInventory() {
    return inventory;
}

void Player::levelUp() {
    level++;
    std::cout << "Level up! You are now level " << level << "!" << std::endl;
    // Increase stats on level up
    setHealth(getHealth() + 10);
    setAttack(getAttack() + 2);
    setDefense(getDefense() + 2);
    setSpeed(getSpeed() + 1);
}

void Player::gainExperience(int amount) {
    experience += amount;
    std::cout << "Gained " << amount << " experience points." << std::endl;
    // Example leveling threshold: every 100 exp points
    while (experience >= 100) {
        experience -= 100;
        levelUp();
    }
}

void Player::useItem(int itemIndex) {
    if (itemIndex < 0 || itemIndex >= inventory.getItemCount()) {
        std::cout << "Invalid item index." << std::endl;
        return;
    }
    const Item& item = inventory.getItem(itemIndex);
    item.applyEffect(*this);
    std::cout << "Used item: " << item.getItemType() << std::endl;
    inventory.removeItem(itemIndex);
}

int Player::selectAction() {
    std::cout << "Select an action:" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Use Item" << std::endl;
    std::cout << "3. Defend" << std::endl;
    std::cout << "Enter choice: ";
    int choice;
    std::cin >> choice;
    while (choice != 1 && choice != 2 && choice != 3) {
        std::cout << "Invalid choice. Enter 1, 2 or 3: ";
        std::cin >> choice;
    }
    return choice;
}
