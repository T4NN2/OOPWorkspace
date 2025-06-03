#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*> get_entities() const { return entities; }
    void set_entities(const std::vector<GameEntity*>& newEntities) { entities = newEntities; }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        entities.clear();

        for (int i = 0; i < numShips; ++i) {
            auto [x, y] = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(x, y));
        }
        for (int i = 0; i < numMines; ++i) {
            auto [x, y] = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(x, y));
        }

        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int it = 0; it < maxIterations; ++it) {
            // std::cout << "Iteration: " << it + 1 << "\n";

            // Move ships
            for (auto* e : entities) {
                if (e->getType() == ShipType) {
                    dynamic_cast<Ship*>(e)->move(1, 0);
                }
            }

            // Check for mine proximity
            for (auto* mine : entities) {
                if (mine->getType() != MineType) continue;

                for (auto* ship : entities) {
                    if (ship->getType() != ShipType) continue;

                    double dist = Utils::calculateDistance(mine->getPos(), ship->getPos());
                    if (dist <= mineDistanceThreshold) {
                        Explosion e = dynamic_cast<Mine*>(mine)->explode();
                        e.apply(*ship);
                    }
                }
            }

            // Check if all ships are destroyed
            bool allShipsDestroyed = true;
            for (auto* e : entities) {
                if (e->getType() == ShipType) {
                    allShipsDestroyed = false;
                    break;
                }
            }

            if (allShipsDestroyed) {
                // std::cout << "All ships destroyed. Game Over.\n";
                break;
            }
        }
    }

    ~Game() {
        for (auto* e : entities) delete e;
    }
};

#endif
