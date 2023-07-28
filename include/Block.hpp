#include "Entity.hpp"

#ifndef BLOCK_HPP
#define BLOCK_HPP

class Block: public Entity {
    public:
        Block(int x, int y, int type): Entity(x, y, type) {
            this->isDestroyed = false;
            this->setType('X');
        }
        ~Block() {}
        void destroy();
    
    private:
        bool isDestroyed;
};

#endif