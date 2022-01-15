//
// Created by xkudla on 15/01/2022.
//

#include "BlacksmithPlayerBuilder.h"

void BlacksmithPlayerBuilder::setResources(){
    m_player->setResources(6000, 0);
    m_player->setResources(400, 1);
    m_player->setResources(800, 2);
}

void BlacksmithPlayerBuilder::setProfit(){
    m_player->setProfit(40, 2);
}