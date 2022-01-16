//
// Created by xkudla on 15/01/2022.
//

#include "BlacksmithPlayerBuilder.h"

void BlacksmithPlayerBuilder::setResources(){
    m_player->setResources(6000, 1);
    m_player->setResources(400, 2);
    m_player->setResources(800, 3);
}

void BlacksmithPlayerBuilder::setProfit(){
    m_player->setProfit(40, 3);
}