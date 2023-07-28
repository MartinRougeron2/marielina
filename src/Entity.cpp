#include "Entity.hpp"

Entity::Entity(int x, int y, int type)
{
    this->x = x;
    this->y = y;
    this->type = type;
}

Entity::~Entity() {
    
}


void Entity::setX(int newX) {
    this->x=newX;
}

void Entity::setY(int newY) {
this->y=newY;
}

void Entity::setType(int newType) {
this->type=newType;
}

int Entity::getX() {
    return this->x;
}

int Entity::getY() {
 return this->y;
}

int Entity::getType() {
 return this->type;
}
