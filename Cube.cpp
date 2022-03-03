//
// Created by Иван Ильин on 15.03.2021.
//

#include "Cube.h"

Cube::Cube(const Vec3D &pos, Cube::Type t) : RigidBody(ObjectNameTag("cube")), type(t){
    // TODO: implement (lesson 1)
}

sf::Color Cube::cubeColor(Cube::Type t) {
    switch (t) {
        case grass:
            return sf::Color(122, 255, 127);
        case sand:
            return sf::Color(255, 235, 153);
        case glass:
            return sf::Color(255, 255, 255, 50);
        case water:
            return sf::Color(120, 147, 255, 100);
        case stone:
            return sf::Color(148, 148, 148);
        case earth:
            return sf::Color(153, 124, 86);
        case wood:
            return sf::Color(117, 74, 39);
        case snow:
            return sf::Color(255, 255, 255);
        default:
            return sf::Color(255, 245, 194);
    }
}
