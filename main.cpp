#include <iostream>
#include "Game.h"
#include "Grid.h"

int main() {
    Game* game = new Game();
    game->start();
    delete game;

    return 0;
}
