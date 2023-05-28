//
// Created by Иван Ильин on 19.09.2021.
//

#ifndef SHOOTER_PLAYERCONTROLLER_H
#define SHOOTER_PLAYERCONTROLLER_H

#include "Player.h"
#include "engine/io/Keyboard.h"
#include "engine/io/Mouse.h"

class PlayerController {
private:
    std::shared_ptr<Player> _player;
    std::shared_ptr<Keyboard> _keyboard;
    std::shared_ptr<Mouse> _mouse;

    bool _inRunning = false;

    std::function<void()> _addCubeCallBack;
    std::function<void()> _removeCubeCallBack;
    std::function<void()> _updateCubeInHandCallBack;

    void animateCameraMotion();

public:
    PlayerController(std::shared_ptr<Player> player, std::shared_ptr<Keyboard> keyboard, std::shared_ptr<Mouse> mouse);
    void update();

    void setAddCubeCallBack(std::function<void()> addCube);
    void setRemoveCubeCallBack(std::function<void()> removeCube);
    void setUpdateCubeInHandCallBack(std::function<void()> updateCube);
};


#endif //SHOOTER_PLAYERCONTROLLER_H
