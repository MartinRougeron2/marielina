#include "shared.hpp"

#ifndef ENTITY_HPP
#define ENTITY_HPP

class Entity
{
    protected:
        int x;
        int y;
        int type;

    public:
        Entity(int x, int y, int type);
        ~Entity();
        void setX(int newX);
        void setY(int newY);
        void setType(int newType);
        int getX();
        int getY();
        int getType();
};

#endif