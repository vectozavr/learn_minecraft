//
// Created by Иван Ильин on 03.10.2021.
//

#include <utils/ResourceManager.h>

#include "Minecraft.h"

using namespace std;

void Minecraft::start() {
    // This code executed once in the beginning:

    screen->setMouseCursorVisible(false);
    setGlEnable(true);

    // loading map
    // TODO: implement (lesson 1)

    // setting callbacks for playerController
    playerController->setAddCubeCallBack([this](){ addCube(); });
    playerController->setRemoveCubeCallBack([this](){ return removeCube(); });
    playerController->setUpdateCubeInHandCallBack([this](){ updateCubeInHandColor(); });
    world->addBody(player);

    // orientating and attaching camera
    // TODO: implement (lesson 2)

    // adding cube in hand
    // TODO: implement (lesson 2)
}

void Minecraft::update() {
    // This code executed every time step:

    // exit the game
    if(keyboard->isKeyTapped(sf::Keyboard::Escape)) {
        exit();
    }

    // switch  OpenGL on/off
    if (keyboard->isKeyTapped(sf::Keyboard::O)) {
        setGlEnable(!glEnable());
    }

    // display debug info
    if (keyboard->isKeyTapped(sf::Keyboard::Tab)) {
        setDebugInfo(!showDebugInfo());
    }

    // save map
    if (keyboard->isKeyTapped(sf::Keyboard::R)) {
        map->saveMap(MinecraftConsts::MAP_NAME);
    }

    playerController->update();
}

void Minecraft::updateCubeInHandColor() {
    // TODO: implement (lesson 2)
}

void Minecraft::gui() {
    // TODO: implement (lesson 2)
}

void Minecraft::addCube() {
    // TODO: implement (lesson 3)
}

void Minecraft::removeCube() {
    // TODO: implement (lesson 3)
}
