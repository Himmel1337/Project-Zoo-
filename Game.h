//
// Created by xkudla on 14/11/2021.
//

#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
//#include "Grid.h"
//#include "Position"

class Game {
//    Grid* m_grid;
    void printIntroduction() const;
    void printOptions() const;
    char waitForInput() const;
    void printEnd() const;
    void processInput(char input);
//    Position choicePosition();
};


#endif //PROJECT_GAME_H
