#include <ncurses.h>
#include "Game.hpp"

int MAP_SIZE = 10;

bool isABlockHere(std::vector<std::pair<int, int>> blocks, int x, int y)
{
    for (int i = 0; i < blocks.size(); i++) {
        std::pair<int, int> block = blocks[i];

        if (block.first == x && block.second == y)
            return true;
    }
    return false;

}

void printPlayer(int ch, int *x, int *y, std::vector<std::pair<int, int>> blocks)
{
    switch (ch)
    {
        case 'd':  // ch == 'd'
            if (!isABlockHere(blocks, *x + 1, *y) && *x < MAP_SIZE*2 -1 ) {
                *x += 1;
            }
            break;
        case 'a':
        if (!isABlockHere(blocks, *x - 1, *y) && *x > 0 ){
             *x -=1;
        }
           // *x -=1;
            break;
        case 'w':
        if (!isABlockHere(blocks, *x, *y - 1) && *y > 0){
            *y -=1;
        }
           // *y -=1;
            break;
        case 's':
        if (!isABlockHere(blocks, *x, *y + 1) && *y < MAP_SIZE -1){
             *y +=1;
        }
           // *y +=1;
            break;

        default:
            break;
        
    }
    
    clear();
    for (int i = 0; i < MAP_SIZE; i++)
    {
        for (int j = 0; j < MAP_SIZE * 2; j++)
        {
            // if same coords
            if (*x==j && *y==i)
                printw("P");
            else if (isABlockHere(blocks, j, i))
                printw("X");
            else
                printw(".");
        }
        printw("\n");
    }
    refresh();
}



int main(void)
{
    Game game;
    MAP_SIZE = game.map_size;
    initscr();
    int x = 0;
    int y = 0;
    int ch = 0;
    std::vector<std::pair<int, int>> blocks = {
        {0, 5},
        {3, 0},
        {2, 6},
        {5, 5},
    };

    while (1)
    {
        printPlayer(ch, &y, &x, blocks);
        ch = getch();
        if (ch == 'q')
            break;
        
    }
    refresh();
    endwin();

    return 0;
}