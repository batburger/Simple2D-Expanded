#ifndef GAMEOBJECT_CAMERA
#define GAMEOBJECT_CAMERA

#include <Simple2D.h>
#include <iostream>

using namespace Simple2D;

class Camera : public Behavior {

    vec3* position;
    vec3* scale;

    void init() override;
     
    void update(long deltaTime) override;

    void setup() override;

    void onRemoval() override;

    void onEvent(SDL_Event& e) override;
};

//REGISTER_GAME_OBJECT(Camera)
#endif