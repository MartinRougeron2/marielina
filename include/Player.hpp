#include "Entity.hpp"
#include "Bomb.hpp"

class Player: public Entity {
    public:
        Player();
        ~Player();

    private:
        std::vector<Bomb> inventory;
};