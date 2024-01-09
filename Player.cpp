//
// Created by Иван Ильин on 14.03.2021.
//

#include <utils/Log.h>

#include "Player.h"

Player::Player() : RigidBody(ObjectNameTag("Player")) {
    // TODO: implement (lesson 2)
}

void Player::nextBlock() {
    // TODO: implement (lesson 2)
}

void Player::previousBlock() {
    // TODO: implement (lesson 2)
}

void Player::collisionCallBack(const CollisionInfo &info) {
    // setting vertical velocity to zero after collision

    Vec3D velocity_parallel = info.normal * velocity().dot(info.normal);
    Vec3D velocity_perpendicular = velocity() - velocity_parallel;

    if (velocity().dot(info.normal) > 0) {
        setVelocity(velocity_perpendicular);
    }
}
