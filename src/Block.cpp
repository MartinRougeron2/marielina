#include "Block.hpp"

void Block::destroy()
{
    this->isDestroyed = true;
    this->setType('.');
}