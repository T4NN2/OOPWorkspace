#include "warrior.h"
#include <cstdlib>
#include <ctime>
Warrior::Warrior(string name, int health, int damage, string weapon)
    : Player(name, health, damage), weapon(weapon) {}

    void Warrior::swingWeapon(Player* opponent) {
        int actualDamage = damage - 5 + (rand() % 11);
        cout << name << " swings their " << weapon << " at " << opponent->getName()
             << " dealing " << actualDamage << " physical damage!" << endl;
        attack(opponent, actualDamage);
    }
    

string Warrior::getWeapon() const { return weapon; }
void Warrior::setWeapon(const string& newWeapon) { weapon = newWeapon; }
