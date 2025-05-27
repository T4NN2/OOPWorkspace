#include "Game.h"
#include "Arena.h"
#include <iostream>
#include <fstream>

Game::Game() : currentLevel(1), player() {}

void Game::start() {
    std::cout << "Welcome to the RPG Battle Arena!" << std::endl;
    // Character selection (simplified)
    std::string playerName;
    std::cout << "Enter your character's name: ";
    std::getline(std::cin, playerName);
    player = Player(playerName, 100, 15, 10, 5);

    bool playing = true;
    while (playing) {
        std::cout << "Starting level " << currentLevel << " battle..." << std::endl;
        generateEnemies(currentLevel);

        Arena arena;
        arena.addCombatant(&player);
        for (auto& enemy : enemies) {
            arena.addCombatant(&enemy);
        }

        arena.runBattle();

        if (!player.isAlive()) {
            std::cout << "You have been defeated. Game over." << std::endl;
            playing = false;
        } else {
            std::cout << "You won the battle!" << std::endl;
            player.gainExperience(50 * currentLevel);
            levelUpPlayer();

            // Grant an item after each stage
            // Randomly select between healing and buff_attack
            int randVal = rand() % 2;
            Item reward = (randVal == 0) ? Item("healing", 20) : Item("buff_attack", 5);
            player.getInventory().addItem(reward);
            std::cout << "You received a " << reward.getItemType() << " item as a reward!" << std::endl;

            currentLevel++;
        }
    }
}

void Game::loadGame() {
    // TODO: Implement loading game state from file
    std::cout << "Load game feature not implemented yet." << std::endl;
}

void Game::saveGame() {
    // TODO: Implement saving game state to file
    std::cout << "Save game feature not implemented yet." << std::endl;
}

void Game::generateEnemies(int level) {
    enemies.clear();
    // Simple enemy generation based on level
    for (int i = 0; i < level; ++i) {
        enemies.emplace_back("Enemy" + std::to_string(i + 1), 50 + 10 * level, 10 + 2 * level, 5 + level, 3 + level, level, "Goblin");
    }
}

void Game::levelUpPlayer() {
    // Placeholder for additional level up logic if needed
}
