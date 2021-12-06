//
// Created by xkudla on 14/11/2021.
//

#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include "Grid.h"
#include "Position"

class Game {
    Grid* m_grid;

    void printIntroduction() const;
    void printOptions() const;
    int waitForInput() const;
    void printEnd() const;
    void processInput(int input);
    //    Position choicePosition();

public:
    Game();
    void start();

};

#endif //PROJECT_GAME_H
