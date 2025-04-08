#include "wizard.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

    void Wizard::castSpell(Player* opponent) {
        int actualDamage = mana - 5 + (rand() % 11);
        cout << name << " casts a spell on " << opponent->getName()
             << " dealing " << actualDamage << " magical damage!" << endl;
        attack(opponent, actualDamage);
    }
    

int Wizard::getMana() const { return mana; }
void Wizard::setMana(int newMana) { mana = newMana; }
