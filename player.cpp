#include "player.h"
#include <cstdlib>
#include <ctime>

Player::Player(string name, int health, int damage)
    : name(name), health(health), damage(damage) {}

    void Player::attack(Player* opponent, int baseDamage) {
        int actualDamage = baseDamage - 5 + (rand() % 11); 
        cout << name << " attacks " << opponent->getName()
             << " for " << actualDamage << " damage!" << endl;
        opponent->takeDamage(actualDamage);
    }

void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    cout << name << " took " << damage << " damage. Remaining health: " << health << endl;
}

string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getDamage() const { return damage; }

void Player::setName(const string& newName) { name = newName; }
void Player::setHealth(int newHealth) { health = newHealth; }
void Player::setDamage(int newDamage) { damage = newDamage; }
