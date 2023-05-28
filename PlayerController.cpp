//
// Created by Иван Ильин on 19.09.2021.
//

#include "PlayerController.h"
#include "engine/utils/Log.h"
#include "engine/animation/Animations.h"
#include "engine/io/SoundController.h"

PlayerController::PlayerController(std::shared_ptr<Player> player,
                                   std::shared_ptr<Keyboard> keyboard,
                                   std::shared_ptr<Mouse> mouse) : _player(player), _keyboard(keyboard), _mouse(mouse) {
}

void PlayerController::update() {
    auto camera = _player->attached(ObjectNameTag("Camera"));

    // Left and right movement
    // TODO: implement (lesson 2)

    // Forward and backward movement
    // TODO: implement (lesson 2)

    // Jump
    // TODO: implement (lesson 2)

    // Horizontal player rotation
    // TODO: implement (lesson 2)

    // Vertical player rotation
    // TODO: implement (lesson 2)

    // Change selected block
    // TODO: implement (lesson 2)

    // Add or remove block
    // TODO: implement (lesson 3)

    animateCameraMotion();
}

void PlayerController::animateCameraMotion() {
    bool inRunning_old = _inRunning;
    _inRunning = Keyboard::isKeyPressed(sf::Keyboard::A) || Keyboard::isKeyPressed(sf::Keyboard::D) || Keyboard::isKeyPressed(sf::Keyboard::W) || Keyboard::isKeyPressed(sf::Keyboard::S);
    auto camera = _player->attached(ObjectNameTag("Camera"));

    // Camera movement during run
    // TODO: implement (lesson 3)
}

// setting callbacks
void PlayerController::setAddCubeCallBack(std::function<void()> addCube) {
    _addCubeCallBack = std::move(addCube);
}
void PlayerController::setRemoveCubeCallBack(std::function<void()> removeCube) {
    _removeCubeCallBack = std::move(removeCube);
}
void PlayerController::setUpdateCubeInHandCallBack(std::function<void()> updateCube) {
    _updateCubeInHandCallBack = std::move(updateCube);
}
