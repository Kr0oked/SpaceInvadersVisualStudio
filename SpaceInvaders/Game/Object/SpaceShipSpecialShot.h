#ifndef SPACEINVADERS_SPACESHIPSPECIALSHOT_H
#define SPACEINVADERS_SPACESHIPSPECIALSHOT_H

#include "../../Game/IShot.h"
#include "Rectangle.h"

class SpaceShipSpecialShot : public Rectangle, public IShot {
public:
    SpaceShipSpecialShot(glm::vec2);
    virtual bool Idle(float);
    virtual int Hit(int);
    virtual void SetPower(int);

private:
    int power;
};

#endif //SPACEINVADERS_SPACESHIPSPECIALSHOT_H
