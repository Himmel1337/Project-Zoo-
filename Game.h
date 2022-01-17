//
// Created by xkudla on 14/11/2021.
//

#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include "Grid.h"
#include "Player.h"
#include "Building.h"
#include "PlayerBuilder/PlayerBuilder.h"
#include "PlayerBuilder/PlayerDirector.h"
#include "PlayerBuilder/BankerPlayerBuilder.h"
#include "PlayerBuilder/BlacksmithPlayerBuilder.h"
#include "PlayerBuilder/WoodCutterPlayerBuilder.h"
#include "Errorlogger.h"


class Game {
    ErrorLogger* m_errorLogger;
    Grid* m_grid;
    Player* m_player;
    int m_turns = 30;
    void printOptions() const;
    void printAvailablePosition();
    int waitForInput() const;
    void printEnd() const;
    void processInput(int input);
    void destroyBuilding();
    void winGame();

public:
    Game();
    void printIntroduction() const;
    void createPlayer();
    void start();
    ~Game();

};

#endif //PROJECT_GAME_H
