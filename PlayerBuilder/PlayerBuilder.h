//
// Created by xkudla on 15/01/2022.
//

#ifndef PROJECT_PLAYERBUILDER_H
#define PROJECT_PLAYERBUILDER_H
#include "../Player.h"

class PlayerBuilder {
protected:
    Player *m_player;
public:
    PlayerBuilder();
    void createPlayer();
    virtual void setResources() = 0;
    virtual void setProfit() = 0;
    Player *getPlayer();
};


#endif //PROJECT_PLAYERBUILDER_H
