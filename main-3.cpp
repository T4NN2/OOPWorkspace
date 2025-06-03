#include <iostream>
#include "Game.h"

int main() {
    Game g;

    g.initGame(3, 2, 10, 10);
    g.gameLoop(5, 1.5);

    return 0;
}
