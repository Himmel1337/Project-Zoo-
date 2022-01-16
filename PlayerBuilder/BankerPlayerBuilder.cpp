//
// Created by xkudla on 15/01/2022.
//

#include "BankerPlayerBuilder.h"

void BankerPlayerBuilder::setResources(){
    m_player->setResources(10000, 1);
    m_player->setResources(400, 2);
    m_player->setResources(400, 3);
}

void BankerPlayerBuilder::setProfit(){
    m_player->setProfit(100, 1);
}