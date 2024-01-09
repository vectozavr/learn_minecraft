cmake_minimum_required(VERSION 3.17)
project(learn_minecraft)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(${CMAKE_PROJECT_NAME}
        Source.cpp
        Minecraft.cpp
        Minecraft.h
        Player.cpp
        Player.h
        Cube.cpp
        Cube.h
        PlayerController.cpp
        PlayerController.h
        Map.cpp
        Map.h
        MinecraftConsts.h
        )

# include 3dzavr engine into our project
add_subdirectory(learn_minecraft/engine)
target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC 3DEngine)