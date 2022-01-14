//
// Created by xkudla on 14/11/2021.
//

#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include "Grid.h"
#include "Player.h"


class Game {
    Grid* m_grid;
    Player* m_player;

    void printIntroduction() const;
    void printOptions() const;
    void printAvailablePosition();
    int waitForInput() const;
    void printEnd() const;
    void processInput(int input);

public:
    Game();
    void start();
    ~Game();

};

#endif //PROJECT_GAME_H
