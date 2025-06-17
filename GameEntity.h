#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <utility>

enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

class GameEntity {
protected:
    std::pair<int, int> position;
    GameEntityType type;

public:
    GameEntity(int x, int y, GameEntityType t) : position(x, y), type(t) {}

    std::pair<int, int> getPos() const { return position; }
    GameEntityType getType() const { return type; }

    virtual ~GameEntity() = default;
};

#endif
