#include <iostream>
#include "Game.h"

int main() {
    Game* game = new Game();
    game->printIntroduction();
    game->createPlayer();
    game->start();

    delete game;
    return 0;
}
