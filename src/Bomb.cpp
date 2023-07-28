#include "Bomb.hpp"

void Bomb::explode(std::vector<Block *> map)
{
    for (int i = 0; i < map.size() - 1; i++)
    {
        Block *tmp = map[i];
        int tmp_x = tmp->getX();
        int tmp_y = tmp->getY();
        int my_x = this->x;
        int my_y = this->y;

        if (
            abs(my_x - tmp_x) == 1 && abs(my_y - tmp_y) == 1
        ) {
            tmp->destroy();
        }
    }
    this->setType('.');

}