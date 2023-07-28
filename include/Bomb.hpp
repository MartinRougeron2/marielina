#include "Entity.hpp"
#include "Block.hpp"

#ifndef BOMB_HPP
#define BOMB_HPP

class Bomb: public Entity {
    public:
        Bomb(int x, int y, int type): Entity(x, y, type) {
            this->state = 0;
            this->timer = 0;
            this->setType('B');
        }
        ~Bomb() {}
        void explode(std::vector<Block *> map);

    private:
        int state; // 0 -> put, 1 -> going to explode, 2 -> exploded
        int timer;
};

#endif
