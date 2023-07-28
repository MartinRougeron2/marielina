#include "Player.hpp"
#include "Block.hpp"

class Game
{
    public:
        Game();
        ~Game();
        void run();
        void update();
        void render();
        void handleInput();
        int map_size = 10;
    
};