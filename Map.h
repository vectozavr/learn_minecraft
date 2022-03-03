//
// Created by Иван Ильин on 15.03.2021.
//

#ifndef MINECRAFT_3DZAVR_MAP_H
#define MINECRAFT_3DZAVR_MAP_H

#include "engine/World.h"
#include "Cube.h"
#include <utility>
#include <vector>

class Map {
private:
    std::shared_ptr<World> world;
    std::map<std::string, std::pair<Cube::Type, Vec3D>> cubes{};

public:
    explicit Map(std::shared_ptr<World> world): world(std::move(world)) {}

    void addCube(const Vec3D& pos, Cube::Type t);
    void removeCube(const Vec3D& pos);

    void loadMap(const std::string& mapName);
    void saveMap(const std::string& mapName);
};


#endif //MINECRAFT_3DZAVR_MAP_H
