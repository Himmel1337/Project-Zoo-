//
// Created by xkudla on 15/01/2022.
//

#include "BankerPlayerBuilder.h"

void BankerPlayerBuilder::setResources(){
    m_player->setResources(10000, 0);
    m_player->setResources(400, 1);
    m_player->setResources(400, 2);
}

void BankerPlayerBuilder::setProfit(){
    m_player->setProfit(100, 0);
}