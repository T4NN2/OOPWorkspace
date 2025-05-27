#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Player.h"
#include "Enemy.h"

class Game {
private:
    int currentLevel;
    Player player;
    std::vector<Enemy> enemies;

public:
    Game();

    void start();
    void loadGame();
    void saveGame();

    void generateEnemies(int level);
    void levelUpPlayer();
};

#endif // GAME_H
