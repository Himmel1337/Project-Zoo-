//
// Created by xkudla on 15/01/2022.
//

#include "PlayerDirector.h"

PlayerDirector::PlayerDirector(PlayerBuilder *builder) {
    m_builder = builder;
}

void PlayerDirector::setPlayerBuilder(PlayerBuilder*builder) {
    m_builder = builder;
}

Player *PlayerDirector::constructPlayer() {
    m_builder->setResources();
    m_builder->setProfit();
    return m_builder->getPlayer();
}