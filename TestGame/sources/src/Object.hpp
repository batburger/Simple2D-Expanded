#ifndef GAMEOBJECTS_OBJECT
#define GAMEOBJECTS_OBJECT

#include <Simple2D.h>

using namespace Simple2D;

class TestObj : public Behavior {
private:
    int i = 0;
public:
    void init() override;

    void update(long deltaTime) override;

    void setup() override;

    void fixedUpdate() override;

    void onRemoval() override;

    void onEvent(SDL_Event& e) override;
};

//REGISTER_GAME_OBJECT(TestObj)

#endif