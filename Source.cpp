//
// Created by Иван Ильин on 06.02.2021.
//

#include "Minecraft.h"

using namespace std;


int main() {
    Minecraft game;

    /*
     * EN:
     * TODO lesson 1: implement a cubic world
     * For this lesson, you will need to work with the following files:
     *
     * Cube.cpp
     * Map.cpp
     *
     * TODO lesson 2: implement player control
     * For this lesson, you will need to work with the following files:
     *
     * Player.cpp
     * PlayerController.cpp
     * Minecraft.cpp
     *
     * TODO lesson 3: implement a building system and camera shake animation
     * For this lesson, you will need to work with the following files:
     *
     * Minecraft.cpp
     * PlayerController.cpp
     * --------------------------------------------------------------------------- *
     * RU:
     * TODO lesson 1: реализуйте кубический мир
     * На этом уроке вам необходимо работать со следующими файлами:
     *
     * Cube.cpp
     * Map.cpp
     * Minecraft.cpp
     *
     * TODO lesson 2: реализуйте управление персонажем
     * На этом уроке вам необходимо работать со следующими файлами:
     *
     * Player.cpp
     * PlayerController.cpp
     * Minecraft.cpp
     *
     * TODO lesson 3: реализуйте систему строения и анимацию покачивания камеры
     * На этом уроке вам необходимо работать со следующими файлами:
     *
     * Minecraft.cpp
     * PlayerController.cpp
     */

    // Optimal for standard monitors:
    //game.create(1280, 720);
    game.create(1920, 1080);

    // Optimal for MacBook Pro 16 display:
    //game.create(2048, 1152);
    //game.create(3840, 2160);

    return 0;
}