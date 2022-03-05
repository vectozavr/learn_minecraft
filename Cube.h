//
// Created by Иван Ильин on 15.03.2021.
//

#ifndef MINECRAFT_3DZAVR_CUBE_H
#define MINECRAFT_3DZAVR_CUBE_H

#include "engine/physics/RigidBody.h"
#include "MinecraftConsts.h"
#include <SFML/Graphics.hpp>

class Cube : public RigidBody {
public:
    enum Type {
        grass,
        sand,
        glass,
        water,
        stone,
        earth,
        wood,
        snow,

        none
    };
private:
    Type type;
public:
    explicit Cube(const ObjectNameTag& name, const Vec3D& pos, Type t);

    static sf::Color cubeColor(Type t);
};


#endif //MINECRAFT_3DZAVR_CUBE_H
