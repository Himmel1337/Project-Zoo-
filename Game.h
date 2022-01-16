//
// Created by xkudla on 14/11/2021.
//

#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H
#include "Grid.h"
#include "Player.h"
<<<<<<< HEAD
#include "Building.h"
=======
>>>>>>> f53954fbfd038fc13d21090c6f1dd4628d76101f
#include "PlayerBuilder/PlayerBuilder.h"
#include "PlayerBuilder/PlayerDirector.h"
#include "PlayerBuilder/BankerPlayerBuilder.h"
#include "PlayerBuilder/BlacksmithPlayerBuilder.h"
#include "PlayerBuilder/WoodCutterPlayerBuilder.h"



class Game {
    Grid* m_grid;
    Player* m_player;
    void printOptions() const;
    void printAvailablePosition();
    int waitForInput() const;
    void printEnd() const;
    void processInput(int input);


public:
    Game();
    void printIntroduction() const;
    void createPlayer();
    void start();
    ~Game();

};

#endif //PROJECT_GAME_H
