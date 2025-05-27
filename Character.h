#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
private:
    std::string name;
    int health;
    int attack;
    int defense;
    int speed;
    bool defending; // Add defending flag

public:
    virtual ~Character() = default; // Add virtual destructor for polymorphism

    Character();
    Character(const std::string& name, int health, int attack, int defense, int speed);

    // Getters
    std::string getName() const;
    int getHealth() const;
    int getAttack() const;
    int getDefense() const;
    int getSpeed() const;
    bool isDefending() const; // Getter for defending

    // Setters
    void setHealth(int health);
    void setAttack(int attack);
    void setDefense(int defense);
    void setSpeed(int speed);
    void setDefending(bool defending); // Setter for defending

    // Methods
    virtual void attackTarget(Character& target);
    virtual void takeDamage(int amount);
    bool isAlive() const;
};

#endif // CHARACTER_H
