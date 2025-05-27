#include "Character.h"
#include <iostream>

Character::Character()
    : name("Unknown"), health(100), attack(10), defense(5), speed(5), defending(false) {}

Character::Character(const std::string& name, int health, int attack, int defense, int speed)
    : name(name), health(health), attack(attack), defense(defense), speed(speed), defending(false) {}

std::string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

int Character::getAttack() const {
    return attack;
}

int Character::getDefense() const {
    return defense;
}

int Character::getSpeed() const {
    return speed;
}

bool Character::isDefending() const {
    return defending;
}

void Character::setHealth(int health) {
    this->health = health;
}

void Character::setAttack(int attack) {
    this->attack = attack;
}

void Character::setDefense(int defense) {
    this->defense = defense;
}

void Character::setSpeed(int speed) {
    this->speed = speed;
}

void Character::setDefending(bool defending) {
    this->defending = defending;
}

void Character::attackTarget(Character& target) {
    int damage = attack - target.getDefense();
    if (damage < 0) {
        damage = 0;
    }
    std::cout << name << " attacks " << target.getName() << " for " << damage << " damage." << std::endl;
    target.takeDamage(damage);
}

void Character::takeDamage(int amount) {
    if (defending) {
        amount /= 2; // Reduce damage by half if defending
        std::cout << name << " is defending and reduces damage to " << amount << "." << std::endl;
        defending = false; // Reset defending after damage is taken
    }
    health -= amount;
    if (health < 0) {
        health = 0;
    }
    std::cout << name << " takes " << amount << " damage, health now " << health << "." << std::endl;
}

bool Character::isAlive() const {
    return health > 0;
}
