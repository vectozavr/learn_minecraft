//
// Created by Иван Ильин on 14.03.2021.
//

#ifndef MINECRAFT_3DZAVR_PLAYER_H
#define MINECRAFT_3DZAVR_PLAYER_H

#include <utility>
#include <SFML/Audio/Sound.hpp>
#include <utils/ResourceManager.h>
#include <physics/RigidBody.h>

#include "Cube.h"
#include "MinecraftConsts.h"

class Player : public RigidBody {
private:
    Cube::Type _selectedBlock = Cube::Type::stone;
public:
    Player();

    [[nodiscard]] Cube::Type selectedBlock() const { return _selectedBlock; }
    void nextBlock();
    void previousBlock();

    void collisionCallBack(const CollisionInfo& info) override;
};


#endif //MINECRAFT_3DZAVR_PLAYER_H
