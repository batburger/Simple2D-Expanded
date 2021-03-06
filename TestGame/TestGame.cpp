#include <iostream>
#include <Engine.h>
#include "./sources/src/Object.hpp"
#include "./sources/src/Camera.hpp"
#include "Thing.hpp"
#include <unordered_map>


int wmain(int argc, char* argv[])
{
    Simple2D::createWindow("Fuck all", 1024, 754);

    std::unordered_map<int, std::function<Behavior*(void)>> collection(
        {
            {0, []() {return new TestObj; } },
            {1, []() {return new Camera; } },
            {2, []() {return new Thing; } }
        });

    Simple2D::MapManager::get()->loadMap(collection, "test.map.xml");
    Simple2D::startMainLoop();
    return 0;
}