//
// Created by xkudla on 15/01/2022.
//

#include "PlayerBuilder.h"

PlayerBuilder::PlayerBuilder() {
    m_player = nullptr;
}

void PlayerBuilder::createPlayer() {
    m_player = new Player();
}

Player *PlayerBuilder::getPlayer() {
    return m_player;
}