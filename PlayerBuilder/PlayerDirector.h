//
// Created by xkudla on 15/01/2022.
//

#ifndef PROJECT_PLAYERDIRECTOR_H
#define PROJECT_PLAYERDIRECTOR_H
#include "PlayerBuilder.h"
#include "../Player.h"

class PlayerDirector {
    PlayerBuilder *m_builder;
public:
    PlayerDirector(PlayerBuilder* builder);
    void setPlayerBuilder(PlayerBuilder* builder);
    Player* constructPlayer();
};


#endif //PROJECT_PLAYERDIRECTOR_H
