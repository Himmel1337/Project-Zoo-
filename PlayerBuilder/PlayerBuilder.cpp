//
// Created by xkudla on 15/01/2022.
//

#include "PlayerBuilder.h"

PlayerBuilder::PlayerBuilder() {
<<<<<<< HEAD
    m_player = new Player();
=======
    m_player = nullptr;
>>>>>>> f53954fbfd038fc13d21090c6f1dd4628d76101f
}

void PlayerBuilder::createPlayer() {
    m_player = new Player();
}

Player *PlayerBuilder::getPlayer() {
    return m_player;
}